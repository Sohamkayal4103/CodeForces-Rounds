#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
  ll t;
  cin >> t;
  while(t--){
    ll n,m;
    cin >> n >> m;
    pair<ll,ll>array[n][m];
    for(ll i =0;i < n;i++){
      for(ll j = 0;j < m;j++){
        ll x;
        cin >> x;
        array[i][j] = make_pair(x,x);
      }
    }
    for(ll i = 1;i < n;i++){
      array[i][0].first += array[i-1][0].first; 
      array[i][0].second += array[i-1][0].second;
    }
    for(ll j = 1;j < m;j++){
      array[0][j].first += array[0][j-1].first; 
      array[0][j].second += array[0][j-1].second;
    }
    for(ll i =1;i < n;i++){
      for(ll j = 1;j < m;j++){
        pair<ll,ll>temp;
        temp.first= min(array[i-1][j].first,array[i][j-1].first);
        temp.second=max(array[i-1][j].second,array[i][j-1].second);
        temp.first += array[i][j].first;
        temp.second += array[i][j].second;
        array[i][j] = temp;
      }
    }
    if(array[n-1][m-1].first <= 0 && array[n-1][m-1].second >= 0 && (n+m-1) % 2 == 0){
      cout << "YES" << endl;
    }
    else{
      cout << "NO" << endl;
    }
  }
  return 0;
}