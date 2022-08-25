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
    for(ll i  = 0;i < n;i++){
      cin >> arr[i];
    }
    ll pos = 0,neg = 0,zeros = 0;
    vector<ll>ans;
    for(ll i = 0;i < n;i++){
      if(arr[i] > 0){
        pos++;
        ans.push_back(arr[i]);
      }
      else if(arr[i] < 0){
        neg++;
        ans.push_back(arr[i]);
      }
      else if(arr[i] == 0){
        if(zeros == 0){
          zeros++;
          ans.push_back(arr[i]);
        }
      }
    }
    
    if(pos > 2 || neg > 2){
      cout << "NO" << endl;
      continue;
    }
    else {
      sort(ans.begin(), ans.end());
      set<ll>st(ans.begin(), ans.end());
      ll n1 = ans.size();
      ll flag = 1;
      for(ll i =0;i < n1;i++){
        for(ll j = i+1;j < n1;j++){
          for(ll k = j+1;k < n1;k++){
            ll temp = ans[i] + ans[j] + ans[k];
            if(st.find(temp) == st.end()){
              flag = 0;
              break;
            }
          }
        }
      }
      if(flag == 1){
        cout << "YES" << endl;
      }
      else{
        cout << "NO" << endl;
      }
    }
  }
}