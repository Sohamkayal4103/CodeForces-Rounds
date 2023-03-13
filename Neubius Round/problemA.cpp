#include<bits/stdc++.h>
#define ll long long 
using namespace std;
int main(){
  ll t;
  cin >> t;
  while(t--){
    ll a,b;
    cin >> a >> b;
    ll hor = abs(a - 0);
    ll ver = abs(b - 0);
    if(hor == ver){
      cout << hor * 2 << endl;
    }
    else if(hor > ver){
      ll diff = (hor-1) - (ver);
      if(diff % 2 == 1){
        cout << hor * 2-1 << endl;
      }
      else{
        cout << (hor * 2 - 1) << endl;
      }
    }
    else{
      ll diff = (ver-1) - hor;
      if(diff % 2 == 1){
        cout << ver*2-1 << endl;
      }
      else{
        cout << ver*2-1 << endl;
      }
    }
  }
}