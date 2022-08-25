#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
  ll t;
  cin >> t;
  while(t--){
    ll n,m;
    cin >> n >> m;
    vector<ll>arr(n);
    for(ll i = 0;i < m;i++){
      cin >> arr[i];
    }
    vector<pair<ll,ll>>v1(m);
    for(ll i = 0;i < m;i++){
      ll j,x;
      cin >> j >> x;
      v1[i] = make_pair(j,x);
    }
  }
}