#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
  ll t;
  cin >> t;
  while(t--){
    ll n;
    cin >> n;
    ll maxi = 2*(n-1);
    vector<ll>arr;
    for(ll i = 0;i*i <= maxi;i++){
      arr.push_back(i*i);
    }
    ll ptr = arr.size()-1;
    set<ll>st;
    vector<ll>ans(n);
    for(ll i = n-1;i >= 0;i--){
      ll other = arr[ptr] - i;
      while(other > n-1 || st.find(other) != st.end()){
        ptr--;
        other = arr[ptr] - i;
      }
      ans[other] = i;
      st.insert(other);
    }
    for(auto it : ans){
      cout << it << " ";
    }
    cout << endl;
  }
}