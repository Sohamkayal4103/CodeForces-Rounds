#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
  ll t;
  cin >> t;
  while(t--){
    ll n,k;
    cin >> n >> k;
    if(k % 4 == 0){
      cout << "NO" << endl;
    }
    else{
      cout << "YES" << endl;
      ll start = 1;
      ll i = 0;
      while(start <= n){
        if(i % 2 == 0 && k % 4 == 2){
          cout << start + 1 << " " << start << endl;
        }
        else{
          cout << start << " " << start + 1 << endl;
        }
        i++;
        start += 2;
      }
    }
  }
}