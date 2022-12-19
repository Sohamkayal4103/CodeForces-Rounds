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
    for(ll i = 0 ;i < n;i++){
      cin >> arr[i];
    }
    ll maxi = INT_MIN;
    int s1 = 0;
    for(ll i = 1;i < n;i++){
      if(arr[i] < arr[i-1]){
        s1 = 1;
        ll temp = arr[i] + arr[i-1];
        if(temp % 2 != 0)temp++;
        temp /= 2;
        maxi = max(maxi,temp);
      }
    }
    if(s1 == 0){
      cout << 0 << endl;
      continue;
    }
    vector<ll>diff(n);
    for(ll i = 0;i < n;i++){
      diff[i] = abs(maxi-arr[i]);
    }
    int signal = 0;
    for(ll i = 1;i < n;i++){
      if(diff[i] < diff[i-1]){
        signal = 1;
        break;
      }
    }
    if(signal == 1){
      cout << -1 << endl;
    }
    else{
      cout << maxi << endl;
    }
  }
}