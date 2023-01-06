#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
    ll t;
    cin >> t;
    while(t--){
        ll n,k;
        cin >> n >> k;
        vector<ll>arr(n+1);
        for(ll i = 1;i <= n;i++){
            cin >> arr[i];
        }
        ll ct = 0;
        for(ll i = 1;i <= n;i++){
            if(arr[i] > (i-ct)){
                ct++;
            }
        }
        ll ans = ct / k;
        if(ct % k != 0){
            ans++;
        }
        cout << ans << endl;
    }
}