#include<bits/stdc++.h>
#define ll long long 
using namespace std;
int main(){
  ll t;
  cin >> t;
  while(t--){
    ll a1,a2,a3,a4;
    cin >> a1 >> a2 >> a3 >> a4;
    if(a1 == 0){
      if(a2 != 0 || a3 != 0 || a4 != 0){
        cout << 1 << endl;
      }
      else{
        cout << 0 << endl;
      }
    }
    else{
      ll temp = 0;
      ll ans = 0;
      ans += a1;
      temp += a1;
      ans += (2*min(a2,a3));
      ll diff = abs(a2 - a3);
      ans += min(diff,a1);
      temp -= min(diff,a1);
      if(a4 == 0 && diff > a1){
        ans++;
      }
      else{
        ans += min(temp+1,a4);
      }
      cout << ans << endl;
    }
  }
}