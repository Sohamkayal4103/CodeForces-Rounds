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
    if(n == 1){
      cout << 0 << endl;
      continue;
    }
    ll temp = *min_element(arr.begin(),arr.end());
    ll pos = min_element(arr.begin(),arr.end()) - arr.begin();
    
    if(temp == 1){
      int signal = 0;
      for(auto it : arr){
        if(it != temp){
          signal = 1;
          break;
        }
      }
      if(signal == 1){
        cout << -1 << endl;
      }
      else{
        cout << 0 << endl;
      }
    }
    else{
      vector<pair<ll,ll>>ans;
      priority_queue<pair<ll,ll>>pq;
      for(ll i = 0;i < n;i++){
        if(arr[i] > temp){
        }
        pq.push({arr[i],i});
      }
      while(!pq.empty()){
          ll pos1 = pq.top().second;
          ll val = pq.top().first;
          pq.pop();
          ll temp2 = val / temp;
          // cout << temp2 << " " << val << " " << temp << endl;
          if(val % temp != 0){
            temp2++;
          }
          // cout << temp2 << " " << pos1 << endl;
          if(temp2 != 1){
            pq.push({temp2,pos1});
            arr[pos1] = temp2;
            ans.push_back({pos1 + 1,pos + 1});
          }
          if(temp2 != 1 && temp2 < temp){
            temp = temp2;
            pos = pos1;
          }
        }
        cout << ans.size() << endl;
        for(ll i = 0;i < ans.size();i++){
          cout << ans[i].first << " " << ans[i].second << endl;
        }
        // for(auto it : arr){
        //   cout << it << " ";
        // }
        // cout << endl;

    }
  }
}