#include<bits/stdc++.h>
#define ll long long 
using namespace std;
int main(){
  ll t;
  cin >> t;
  while(t--){
    ll n;
    cin >> n;
    if(n % 2 == 0){
      cout << "No" << endl;
    }
    else{
      cout << "Yes" << endl;
      ll p1 = 1,p2 = 2 * n;
      while(p1 <= n){
        cout << p1 << " " << p2 << endl;
        p1 += 2;
        p2--;
      }
      p1 = 2;
      while(p1 <= n){
        cout << p1 << " " << p2 << endl;
        p1 += 2;
        p2--;
      }
    }
  }
}