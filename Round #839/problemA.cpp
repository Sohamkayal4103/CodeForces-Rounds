#include<bits/stdc++.h>
#define ll long long 
using namespace std;
int main(){
  ll t;
  cin >> t;
  while(t--){
    string s;
    cin >> s;
    int a = s[0] - '0';
    int b = s[2] - '0';
    int ans = a + b;
    cout << ans << endl;
  }
}