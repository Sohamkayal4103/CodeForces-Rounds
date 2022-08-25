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
    sort(arr.begin(), arr.end());
    map<ll,ll>mpp;
    for(ll i = 0;i < arr.size();i++){
      if(arr[i] % 10 == 0){
        mpp[arr[i]]++;
      }
    }
    int signal = 0;
    ll c = 0;
    for(auto it : mpp){
      c++;  
    }
    if(c > 1){
      signal = 1;
    }
    if(signal == 1){
      cout << "NO" << endl;
    }
    else{
      ll till = *max_element(arr.begin(), arr.end());
      if(till % 2 == 0){
        till += (till % 10);
      }
      ll start = *min_element(arr.begin(), arr.end());
      set<ll>st;
      st.insert(start);
      while(start < till){
        start += (start % 10);
        st.insert(start);
        if(start % 10 == 0){
          break;
        }
      } 
      // for(auto it :st){
      //   cout << it << " ";
      // }
      // cout << endl;
      ll ct = 0;
      for(ll i = 0;i < n;i++){
        if(arr[i] % 2 == 1){
          arr[i] += (arr[i]%10);
        }
        if(st.find(arr[i]) != st.end()){
          ct++;
        }
      }
      if(ct == n){
        cout << "YES" << endl;
      }
      else{
        cout << "NO" << endl;
      }
    }
  }
}