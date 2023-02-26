#include<bits/stdc++.h>
#define ll long long
using namespace std;

int f(vector<vector<ll>>&v,map<ll,ll>mpp,ll i){
  for(ll j = 0;j < v[0].size();j++){
    mpp[v[i][j]]++;
  }
  return mpp.size();
}

int main(){
  ll t;
  cin >> t;
  while(t--){
    ll n,m;
    cin >> n >> m;
    vector<vector<ll>>v;
    vector<ll>arr(n);
    for(ll i = 0;i < n;i++){
      cin >> arr[i];
    }
    v.push_back(arr);
    for(ll i = 0;i < m;i++){
      ll a,b;
      cin >> a >> b;
      arr[a] = b;
      v.push_back(arr);
    }
    int ans = 0;
    for(ll i = 0;i < m;i++){
      map<ll,ll>mpp;
      for(ll j = 0;j < n;j++){
        mpp[v[i][j]]++;
        ans += f(v,mpp,j);
      }
    }
    cout << ans << endl;
    // for(ll i = 0;i <= m;i++){
    //   for(ll j = 0;j <= m;j++){
    //     cout << v[i][j] << " ";
    //   }
    //   cout << endl;
    // }
  }
}