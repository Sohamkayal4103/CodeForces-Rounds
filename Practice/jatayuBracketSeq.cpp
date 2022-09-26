#include<bits/stdc++.h>
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
        ll ans = n;
        ll curr = 0,fcurr = 0;
        for(ll i = 0;i < s.length();i++){
            if(s[i] == '('){
                curr++;
                if(curr <= fcurr){
                    ans--;
                }
                fcurr = curr;
            }
            else{
                curr--;
            }
        }
        cout << ans << endl;
    }    
}