#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
  ll t;
  cin >> t;
  while(t--){
    string s;
    cin >> s;
    ll w;
    cin >> w;
    ll price = 0;
    for(ll i = 0;i < s.length();i++){
      price += (s[i]-'a'+1);
    }
    vector<ll>arr(26,0);
    for(ll i = 0;i < s.length();i++){
      arr[s[i]-'a']++;
    }
    for(ll i = 25;i >= 0;i--){
      while(price > w && arr[i] > 0){
        price -= (i+1);
        arr[i]--;
      }
    }
    vector<ll>ans(26,0);
    string s2 ="";
    for(ll i =0;i < s.length();i++){
      if(ans[s[i]-'a'] == arr[s[i]-'a']){
        continue;
      }
      else{
        s2 += s[i];
        ans[s[i]-'a']++;
      }
    }
    cout << s2 << endl;

  }
}