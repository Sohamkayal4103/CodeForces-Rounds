#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
  ll t;
  cin >> t;
  while(t--){
    ll n;
    cin >> n;
    vector<pair<ll,ll>>arr;
    for(ll i = 0;i < n;i++){
      ll a,b;
      cin >> a >> b;
      arr.push_back(make_pair(a,b));
    }
    // for(ll i = 0;i < n;i++){
    //   cout << arr[i].first << " " << arr[i].second << endl;
    // }
    ll left = 0,right = 0,up = 0,down = 0;
    for(ll i = 0;i < n;i++){
      ll x = arr[i].first;
      ll y = arr[i].second;
      if(x > right){
        right = x;
      }
      if(x < left){
        left = x;
      }
      if(y > up){
        up = y;
      }
      if(y < down){
        down = y;
      }
    }
    ll length = right-left;
    ll height = up-down;
    ll ans = 2*(length+height);
    cout << ans << endl;
  }
}