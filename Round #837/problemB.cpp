#include<bits/stdc++.h>
#define ll long long 
using namespace std;
int main(){
    ll t;
    cin >> t;
    while(t--){
        ll n,m;
        cin >> n >> m;
        map<ll,ll>mpp;
        for(ll i = 1;i <= n;i++){
            mpp[i] = n+1;
        }
        vector<ll>arr(n+1,n+1);
        for(ll i = 0;i < m;i++){
            ll a,b;
            cin >> a >> b;
            if(a > b){
                ll temp = a;
                a = b;
                b = temp;
            }
            arr[a] = min(arr[a],b);
        }
        for(ll i = n-1;i >= 1;i--){
            arr[i] = min(arr[i],arr[i+1]);
        }
        ll ans = 0;
        for(ll i = 1;i <= n;i++){
            ans += arr[i] - i;
        }
        cout << ans << endl;
    }
}