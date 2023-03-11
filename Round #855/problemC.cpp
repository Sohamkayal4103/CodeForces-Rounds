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
    priority_queue<ll>pq;
    ll ans = 0;
    for(ll i = 0;i < n;i++){
      if(arr[i] == 0){
        if(!pq.empty()){
          ans += pq.top();
          pq.pop();
        }
      }
      else{
        pq.push(arr[i]);
      }
    }
    cout<< ans << endl;
  }
}