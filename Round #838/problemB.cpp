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
        map<ll,vector<ll>>mpp;
        for(ll i = 0;i < n;i++){
            mpp[arr[i]].push_back(i);
        }
        // for(auto it : mpp){
        //     for(auto it2 : it.begin()){
        //         cout << it2 << " ";
        //     }
        //     cout << endl;
        // }
        sort(arr.begin(),arr.end());
        ll prev = arr[0];
        vector<pair<ll,ll>>ans;
        for(ll i = 1;i < n;i++){
            ll temp = arr[i] % prev;
            if(temp != 0){
                ll temp2 = arr[i];
                ll val = prev - temp;
                arr[i] += val;
                ll pos = mpp[temp2][0];
                mpp[temp2].erase(mpp[temp2].begin()+0);
                prev = arr[i];
                ans.push_back(make_pair(pos,val));
            }
            else{
                prev = arr[i];
            }
        }
        cout << ans.size() << endl;
        for(ll i = 0;i < ans.size();i++){
            cout << ans[i].first + 1 << " " << ans[i].second << endl;
        }
    }
}