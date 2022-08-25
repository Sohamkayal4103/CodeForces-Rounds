#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
  ll t;
  cin >> t;
  while(t--){
    ll s;
    cin >> s;
    vector<ll>arr;
    ll n = 9;
    while(n > 0){
      if(s < n){
        n--;
      }
      else{
        s -= n;
        arr.push_back(n);
        n--;
      }
    }
    reverse(arr.begin(), arr.end());
    for(auto it : arr){
      cout << it;
    }
    cout << endl;
  }
}