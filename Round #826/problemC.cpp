#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
    ll t;
    cin >> t;
    while(t--){
        ll n;
        cin >> n;
        vector<ll>arr(n);
        for(ll i = 0;i < n;i++){
            cin >> arr[i];
        }
        vector<ll>prefSum(n);
        ll sum = 0;
        for(ll i = 0;i < n;i++){
            sum += arr[i];
            prefSum[i] = sum;
        }
        cout << sum << endl;
        map<ll,ll>mpp;
        for(ll i = 0;i < n;i++){
            mpp[prefSum[i]] = i;
        }
        set<ll>st;
        for(ll i = 0;i < n;i++){
            st.insert(prefSum[i]);
        }
        ll ans;
        for(ll i = 0;i < n;i++){
            if(sum % prefSum[i] == 0){
                ll q = sum / prefSum[i];
                cout << prefSum[i] << " " << sum << endl;
                int signal = 0;
                for(ll j = 0;j <= q;j++){
                    if(st.find(prefSum[i] * j) == st.end()){
                        signal = 1;
                        cout << "breaking loop at " <<  << endl;
                        break;
                    }
                }
                if(signal == 0){
                    vector<ll>arr1;
                    for(ll j = 0;j <= q;j++){
                        arr1.push_back(mpp[prefSum[i] * j]);
                    }
                    ll iniVal = arr1[0] + 1;
                    for(ll j = 1;j < arr1.size();j++){
                        ll diff = arr1[i] - arr1[i-1];
                        if(diff > iniVal){
                            iniVal = diff;
                        }
                    }
                    ans = iniVal;
                }

            }
        }
        cout << ans << endl;
    }
}