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
    // ll n = s.length();
    // cout << s << endl;
    int signal = 0;
      ll p1 = 0;
      while(p1 < n && (s[p1] == 'm' || s[p1] == 'M')){
        p1++;
      }
      if(p1 == n){
        signal = 1;
        // cout << "Here 1" << endl;
      }
      if(s[p1] == 'e' || s[p1] == 'E' && signal == 0){
        while(p1 < n && (s[p1] == 'e' || s[p1] == 'E')){
          p1++;
        }
        if(p1 == n){
          signal = 1;
          // cout << "Here 2" << endl;
        }
        if(s[p1] == 'o' || s[p1] == 'O' && signal == 0){
          while(p1 < n && (s[p1] == 'o' || s[p1] == 'O')){
            p1++;
          }
          if(p1 == n){
            signal = 1;
            // cout << "Here 3" << endl;
          }
          if(s[p1] == 'w' || s[p1] == 'W' && signal == 0){
            while(p1 < n && (s[p1] == 'w' || s[p1] == 'W')){
              p1++;
            }
            if(p1 != n){
              signal = 1;
              // cout << "Here 4" << endl;
            }
          }
          else{
            signal = 1;
            // cout << "Here 5" << endl;
          }
        }
        else{
          signal = 1;
          // cout << "Here 6" << endl;
        }
      }
      else{
        signal = 1;
        // cout << "Here 7" << endl;
        // cout << p1 << " " << s[p1] << endl;
      }
      if(signal == 1){
        cout << "NO" << endl;
      }
      else{
        cout << "YES" << endl;
      }
  }
}