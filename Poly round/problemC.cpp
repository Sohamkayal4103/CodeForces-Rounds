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
        ll ct0 = 0,ct1 = 0;
        vector<ll>ans;
        for(ll i = 0;i < n-1;i++){
            ll totPlayers = i+1;
            if(s[i] == '0'){
                ct0++;
                if(ct1 > 0){
                    ans.push_back(i+1);
                }
                else{
                    ans.push_back(1);
                }
            }
            else if(s[i] == '1'){
                ct1++;
                if(ct0 > 0){
                    ans.push_back(i+1);
                }
                else{
                    ans.push_back(1);
                }   
            }
        }
        for(auto it : ans){
            cout << it << " ";
        }
        cout << endl;
    }
}