#include<bits/stdc++.h>
#define mod 998244353
#define ll long long 
using namespace std;
int main(){
    ll t;
    cin >> t;
    while(t--){
        ll n;
        cin >> n;
        string s;
        cin >> s;
        ll ans = 1;
        ll prev = 1;
        for(ll i = 1;i < n;i++){
            if(s[i] == s[i-1]){
                prev = (prev * 2) % mod;
                ans = (ans + prev) % mod;
            }
            else{
                prev = 1;
                ans = (ans + prev) % mod;
            }
        }
        cout << ans << endl;
    }
}