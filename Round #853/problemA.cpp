#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
  ll t;
  cin >> t;
  while(t--){
    ll n;
    cin >> n;
    vector<ll>arr(n);
    for(ll i = 0;i < n;i++){
      cin >> arr[i];
    }
    int signal = 0;
    for(ll i = 0;i < n;i++){
      for(ll j = i+1;j < n;j++){
        if(__gcd(arr[i],arr[j]) <= 2){
          signal = 1;
          break;
        }
      }
    }
    if(signal == 1){
      cout << "Yes" << endl;
    }
    else{
      cout << "No" << endl;
    }
  }
}