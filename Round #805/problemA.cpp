#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
  ll t;
  cin >> t;
  while(t--){
    string s;
    cin >> s;
    string comp = "1";
    while(comp.length() != s.length()){
      comp += "0";
    }
    ll num1 = stoi(s);
    ll num2 = stoi(comp);
    ll ans = num1 - num2;
    cout << ans << endl;
  }
}