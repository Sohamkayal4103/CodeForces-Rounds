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
    map<char ,ll>mpp;
    for(ll i = 0;i < n;i++){
      mpp[s[i]]++;
    }
    ll ans = 0;
    for(char c = 'a';c <= 'z';c++){
      char c1 = toupper(c);
      ll temp = min(mpp[c],mpp[c1]);
      mpp[c] -= temp;
      mpp[c1] -= temp;
      ans += temp;
    }
    // for(char c = 'a' ;c <= 'z';c++){
    //   char c1 = toupper(c);
    //   cout << c << ": " << mpp[c] << endl;
    //   cout << c1 << ": " << mpp[c1] << endl;
    // }
    for(char c = 'a' ;c <= 'z';c++){
      if(k == 0)break;
      char c1 = toupper(c);
      if(mpp[c1] == 0 && mpp[c] != 0){
        ll temp = mpp[c] / 2;
        ans += min(temp,k);
        k -= min(temp,k);
      }
      else if(mpp[c1] != 0 && mpp[c] == 0){
        ll temp = mpp[c1] / 2;
        ans += min(temp,k);
        k -= min(temp,k);
      }
    }
    cout << ans << endl;
  }
}