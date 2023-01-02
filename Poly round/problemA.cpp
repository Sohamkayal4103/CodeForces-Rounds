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
        string ans = "";
        ll sum = 0;
        if(s[0] == '0'){
            sum = 0;
        }
        else{
            sum = 1;
        }
        for(ll i = 1;i < n;i++){
            if(s[i] == '0'){
                ans += "+";
            }
            else if(s[i] == '1' && sum == 1) {
                ans += "-";
                sum--;
            }
            else if(s[i] == '1' && sum == 0){
                ans += "+";
                sum++;
            }
        }
        cout << ans << endl;
    }
}