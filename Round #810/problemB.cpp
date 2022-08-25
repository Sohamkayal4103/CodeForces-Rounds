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
    vector<pair<ll,ll>>v2;
    vector<vector<ll>>adj(n+1);
    for(ll i = 0;i < n;i++){
      cin >> arr[i];
    }
    for(ll i = 0;i < m;i++){
      ll a,b;
      cin >> a >> b;
      v2.push_back(make_pair(a,b));
      adj[a].push_back(b);
      adj[b].push_back(a);
    }
    if(m % 2 == 0){
      cout << 0 << endl;
      continue;
    }
    // for(auto it : v2){
    //   cout << it.first << " " << it.second << endl;
    // }
    // for(ll i = 1;i <= n;i++){
    //   cout << i << ": ";
    //   for(ll j = 0;j < adj[i].size();j++){
    //     cout << adj[i][j] << " ";
    //   }
    //   cout << endl;
    // }
    ll ans = LLONG_MAX;
    for(ll i =0;i < m;i++){
      pair<ll,ll>p1 = v2[i];
      ll n1 = p1.first;
      ll n2 = p1.second;
      ll temp = 0;
      // cout << adj[n1].size() << " " << adj[n2].size() << endl;
      if(adj[n1].size() % 2 == 1 && adj[n2].size() % 2 == 1){
        temp = min(arr[n1-1],arr[n2-1]);
        // cout << "temp: " << temp << endl;
      }
      else if(adj[n1].size() % 2 == 1 && adj[n2].size() % 2 == 0){
        temp = arr[n1-1];
        // cout << "temp: " << temp << endl;
      }
      else if(adj[n1].size() % 2 == 0 && adj[n2].size() % 2 == 1){
        temp = arr[n2-1];
        // cout << "temp: " << temp << endl;
      }
      else{
        temp = arr[n1-1] + arr[n2-1];
        // cout << "temp: " << temp << endl;
      }
      if(temp < ans){
        ans = temp;
      }
    }
    cout << ans << endl;
  }
}