#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
  ll t;
  cin >> t;
  while(t--){
    ll n,k;
    cin >> n >> k;
    vector<ll>arr(k);
    unordered_map<ll,vector<ll>>mpp;
    for(ll i =0;i < n;i++){
      ll x;
      cin >> x;
      mpp[x].push_back(i);
    }
    for(auto it : mpp){
      sort(it.second.begin(), it.second.end());
    }
    // for(auto it : mpp){
    //   cout << it.first << ": ";
    //   for(auto l : it.second){
    //     cout << l << " ";
    //   }
    //   cout << endl;
    // }
    for(ll i = 0;i < k;i++){
      ll a,b;
      cin >> a >> b;
      if(mpp.find(a)==mpp.end() || mpp.find(b)==mpp.end()){
        cout << "NO" << endl;
      }
      else if(mpp[a][0] < mpp[b][mpp[b].size()-1]){
        cout << "YES" << endl;
      }
      else{
        cout << "NO" << endl;
      }
    }

  }
}