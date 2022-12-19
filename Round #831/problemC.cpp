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
        sort(arr.begin(),arr.end());
        ll ans = 0,diff = 0;
        for(ll i = 1;i < n-1;i++){
            
                diff = arr[i] - arr[i-1];
                ll temp = diff;
                temp += arr[n-1] - arr[i-1];
                ans = max(ans,temp);
            
        }
        for(ll i = 2;i < arr.size();i++){
            
                diff = arr[i] - arr[i-1];
                ll temp = diff;
                temp += arr[i] - arr[0];
                ans = max(ans,temp);
            
        }
        cout << ans << endl;
    }
}