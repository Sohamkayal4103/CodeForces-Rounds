#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
  ll t;
  cin >> t;
  while(t--){
    ll a,b,c,d;
    cin >> a >> b >> c >> d;
    ll pr1 = a*d;
    ll pr2 = b*c;
    ll n1 = min(pr1,pr2);
    ll n2 = max(pr1,pr2);
    if(n1 == n2){
      cout << 0 << endl;
    }
    else if(n1 == 0 || n2 == 0){
      cout << 1 << endl;
    }
    else if(n2 % n1 == 0){
      cout << 1 << endl;
    }
    else{
      cout << 2 << endl;
    }
  }
}