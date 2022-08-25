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
    for(ll i =0;i < n;i++){
      cin >> arr[i];
    }
    vector<ll>ans(n+1,0);
    vector<ll>mpp(n+1,-1);
    for(ll i =0;i < n;i++){
      if(mpp[arr[i]] == -1){
        mpp[arr[i]] = i % 2;
        ans[arr[i]]++;
      }
      else if(mpp[arr[i]] != i % 2){
        mpp[arr[i]] = i % 2;
        ans[arr[i]]++;
      }
    }
    for(ll i = 1;i <= n;i++){
      cout << ans[i] << " ";
    }
    cout << endl;
  }
}