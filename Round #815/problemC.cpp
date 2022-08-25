#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
  ll t;
  cin >> t;
  while(t--){
    ll n,m;
    cin >> n >> m;
    vector<vector<ll>>arr(n,vector<ll>(m));
    vector<string>arrs(n);
    for(ll i = 0;i < n;i++){
      cin >> arrs[i];
    }
    for(ll i = 0;i < n;i++){
      for(ll j = 0;j < m;j++){
        arr[i][j] = arrs[i][j]-'0';
      }
    }
    ll signal = 0,temp = 0;
    for(ll i = 0;i < n-1;i++){
      for(ll j = 0;j < m-1;j++){
        ll ct = 0;
        if(arr[i][j] == 0){
          ct++;
        }
        if(arr[i+1][j] == 0){
          ct++;
        }
        if(arr[i][j+1] == 0){
          ct++;
        }
        if(arr[i+1][j+1] == 0){
          ct++;
        }
        if(ct >= 2){
          signal = 1;
        }
        if(ct > temp){
          temp = ct;
        }
      }
    }
    ll ct1 = 0;
    for(ll i = 0;i < n;i++){
      for(ll j = 0;j < m;j++){
        if(arr[i][j] == 1){
          ct1++;
        }
      }
    }
    if(temp >= 2){
      signal = 1;
    }
    else if(temp == 1){
      signal = 0;
    }
    else{
      signal = 2;
    }
    if(signal == 1){
      cout << ct1 << endl;
    }
    else if(signal == 2){
      cout << ct1-2 << endl;
    }
    else{
      cout << ct1-1 << endl;
    }
  }
}