#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
    ll t;
    cin >> t;
    while(t--){
        ll n,k;
        cin >> n >> k;
        string s;
        cin >> s;
        map<char,ll>mpp;
        for(ll i = 0;i < s.length();i++){
            mpp[s[i]]++;
        }
        string ans = "";
        for(ll i = 0;i < k;i++){
            ll length = n/k;
            for(char ch = 'a';ch <= 'z';ch++){
                if(length <= 0){
                    ans += ch;
                    break;
                }
                length--;
                if(mpp[ch]){
                    mpp[ch]--;
                }
                else{
                    ans += ch;
                    break;
                }
            }
        }
        cout << ans << endl;
    }
}