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
    ll maxi = INT_MIN;
    for(ll i = 0;i < n-1;i++){
      if(arr[i] < arr[i+1] && arr[i] < maxi){
        signal = 1;
        break;
      }
      if(arr[i] > maxi){
        maxi = arr[i];
      }
    }
    if(signal == 1){
      cout << "NO" << endl;
    }
    else{
      cout << "YES" << endl;
    }
  }
}