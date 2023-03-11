//author: Soham kayal
#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
  ll t;
  cin >> t;
  while(t--){
    for(ll i = 0;i < 78;i++){
      
    }
    ll n;
    cin >> n;
    string s;
    cin >> s;
    ll ans = n-1;
    for(ll i = 1;i < s.length()-1;i++){
      if(s[i-1] == s[i+1]){
        ans--;
      }
    }
    cout << ans << endl;
  }
}