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
    unordered_map<ll,ll>mpp;
    for(ll i = 0;i < n;i++){
      mpp[arr[i]]++;
    }
    ll ans = -1;
    for(ll i = 0;i < n;i++){
      if(mpp[arr[i]] > 1){
        mpp[arr[i]]--;
        ans = i;
      }
    }
    cout << ans + 1 << endl;
  }
}