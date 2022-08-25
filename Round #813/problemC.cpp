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
    map<ll,vector<ll>>mpp;
    for(ll i = 0;i < n;i++){
      mpp[arr[i]].push_back(i);
    }
    // for(ll i = 0;i < mpp.size();i++){
    //   for(ll j = 0;j < mpp[i].size();j++){
    //     cout << mpp[i][j] << " ";
    //   }
    //   cout << endl;
    // }
    ll ct = 0;
    priority_queue<ll>q;
    q.push(arr[0]);
    for(ll i = 1;i < n;i++){
      if(arr[i] == q.top()){
        continue;
      }
      else if(arr[i] < q.top()){
        while(!q.empty()){
          ll temp = q.top();
          q.pop();
          for(ll j = 0;j < mpp[temp].size();j++){
            // if(mpp[temp][j] > i){
            //   continue;
            // }
            arr[mpp[temp][j]] = 0;
            
          }
          ct++;
        }
      }
      // cout << "ct is: " << ct << endl;
      q.push(arr[i]);
    }
    cout << ct << endl;
    // for(auto it : arr){
    //   cout << it << " ";
    // }
    // cout << endl;
  }
}