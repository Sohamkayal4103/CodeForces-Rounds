#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
  ll t;
  cin >> t;
  while(t--){
    ll n,m;
    cin >> n >> m;
    if(n == 1 && m == 1){
      cout << 0 << endl;
    }
    else{
      ll ans = (n+m)-2+min(n,m);
      cout << ans << endl;
    }
  }
}