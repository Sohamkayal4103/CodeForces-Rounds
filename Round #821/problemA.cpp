#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
    ll t;
    cin >> t;
    while(t--){
        ll n,k;
        cin >> n >> k;
        vector<ll>arr(n);
        for(ll i = 0;i < n;i++){
            cin >> arr[i];
        }
        ll score = 0;
        // for(ll i = 0;i < n-k+1;i++){
        //     vector<ll>ans;
        //     for(ll j = i;j < i+k-1;j++){
        //         ll temp = j,val = arr[j];
        //         while(temp < n){
        //             val = max(val,arr[temp]);
        //             temp += k;
        //         }
        //         ans.push_back(val);
        //     }
        //     ans.push_back(arr[i+k-1]);
        //     ll sc1 = 0;
        //     for(auto it : ans){
        //         sc1 += it;
        //         cout << it << " ";
        //     }
        //     cout << endl;
        //     score = max(sc1,score);
        // }
        for(ll i = 0;i < n;i++){
            if(i % k != 0){
                arr[i%k] = max(arr[i%k],arr[i]);
            }
        }
        for(ll i = 0;i < n-k+1;i++){
            ll sc = 0;
            for(ll j = i;j < i+k;j++){
                if(j % k != 0){
                    ll val = max(arr[j],arr[j%k]);
                    sc += val;
                }
                else{
                    sc += arr[j];
                }
            }
            score = max(sc,score);
        }
        cout << score << endl;
    }
}