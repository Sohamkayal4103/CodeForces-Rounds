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
        ll sum = 0;
        for(ll i = 0;i < n;i++){
            sum += arr[i];
        }
        if(sum % 2 == 0){
            cout << 0 << endl;
        }
        else{
            // cout << "Followed this: " << endl;
            vector<ll>ans(n);
            for(ll i = 0;i < n;i++){
                if(arr[i] % 2 == 1){
                    ll op = 0;
                    while(arr[i] % 2 == 1){
                        arr[i] /= 2;
                        op++;
                    }
                    ans[i] = op;
                }
                else if(arr[i] % 2 == 0){
                    ll op = 0;
                    while(arr[i] % 2 == 0){
                        arr[i] /= 2;
                        op++;
                    }
                    ans[i] = op;
                }
            }
            ll ansf = LLONG_MAX;
            for(ll i = 0;i < ans.size();i++){
                ansf = min(ansf,ans[i]);
            }
            cout << ansf << endl;

        }
    }
}