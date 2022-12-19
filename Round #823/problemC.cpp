#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
    ll t;
    cin >> t;
    while(t--){
        string s;
        cin >> s;
        ll n = s.length();
        map<char,ll>mpp1;
        map<char,ll>mpp2;
        for(char x = '0';x <= '9';x++){
            mpp1[x] = -1;
        }
        for(ll i = 0;i < n;i++){
            mpp1[s[i]] = i;
        }
        ll j = 0;
        string ans = "";
        for(char x = '0';x <= '9';x++){
                while(j <= mpp1[x]){
                    if(s[j] == x){
                        ans += s[j];
                    }
                    else{
                        if(s[j] != '9'){
                            mpp2[s[j] + 1]++;
                        }
                        else{
                            mpp2['9']++;
                        }
                    }
                    j++;
                }
                for(ll i = 0;i < mpp2[x];i++){
                    ans += x;
                }
        }
        // for(auto it : mpp2){
        //     cout << it.first << " " << it.second << endl;
        // }
        // for(auto it : mpp2){
        //     for(ll a = 0;a < it.second;a++){
        //         ans += it.first;
        //     }
        // }
        cout << ans << endl;
    }
}