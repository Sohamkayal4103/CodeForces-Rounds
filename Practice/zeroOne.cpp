#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
    ll t;
    cin >> t;
    while(t--){
        ll n;
        cin >> n;
        ll x,y;
        cin >> x >> y;
        string s1,s2;
        cin >> s1 >> s2;
        ll ct = 0;
        vector<ll>arr;
        for(ll i = 0;i < n;i++){
            if(s1[i] != s2[i]){
                arr.push_back(i);
                ct++;
            }
        }
        if(ct == 0){
            cout << 0 << endl;
        }
        else if(ct % 2 == 1){
            cout << -1 << endl;
        }
        else{
            ll ans = 0;
            if(ct > 2){
                ans = (ct/2) * y;
            }
            else{
                if(arr[1]-arr[0] == 1){
                    ans = min(2*y,x);
                }
                else{
                    ans = y;
                }
            }
            cout << ans << endl;
        }
    }
}