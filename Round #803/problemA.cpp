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
    for(ll i=0;i<n;i++){
      cin >> arr[i];
    }
    ll temp = 0;
    for(ll i=0;i<arr.size();i++){
      temp = temp ^ arr[i];
    }
    // cout << temp << endl;
    int flag = 0;
    for(ll i=0;i<arr.size();i++){
      temp = temp ^ arr[i];
      if(temp == arr[i]){
        cout << arr[i] << endl;
        flag = 1;
        break;
      }
      else{
        temp = temp ^ arr[i];
      }
    }
  }
}