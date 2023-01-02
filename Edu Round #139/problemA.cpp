#include<bits/stdc++.h>
#define ll long long 
using namespace std;
int main(){
    ll t;
    cin >> t;
    while(t--){
        ll n;
        cin >> n;
        string s = to_string(n);
        ll ans = 9 * (s.length()-1);
        ans += s[0] - '0';
        cout << ans << endl;
    }
}