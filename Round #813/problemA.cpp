#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
  ll t;
  cin >> t;
  while(t--){
    ll n,k;
    cin >> n >> k;
    vector<ll>arr(n+1);
    for(ll i = 1;i <= n;i++){
      cin >> arr[i];
    }
    map<ll,ll>mpp;
    for(ll i = 1;i <= n;i++){
      mpp[arr[i]] = i;
    }
    ll ct = 0;
    for(ll i = 1;i <= k;i++){
      if(arr[i] > k){
        ct++;
      }
    }
    cout << ct << endl;
  }
}