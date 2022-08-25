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
    ll maxi = *max_element(arr.begin(),arr.end());
    set <ll>st;
    for(ll i = 1;i*i <= maxi;i++){
      st.insert(i*i);
    }
    int signal = 0;
    for(ll i = 0;i < n;i++){
      if(st.find(arr[i]) == st.end()){
        signal = 1;
        break;
      }
    }
    if(signal == 1){
      cout << "YES" << endl;
    }
    else{
      cout << "NO" << endl;
    }
  }
}