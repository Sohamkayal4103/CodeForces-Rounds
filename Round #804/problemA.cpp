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
    // ll temp = n/2;
    // if(temp % 2 == 0){
    //   cout << (temp+1) << " " << (temp+1) << " " << 1 << endl;
    // }
    // else{
    //   cout << (temp-1) << " " << (temp-1) << " " << 1 << endl;
    // }
    ll temp = n/2;
    cout << temp << " " << temp << " " << 0 << endl;
  }
  else{
    cout << -1 << endl;
  }
  }
}