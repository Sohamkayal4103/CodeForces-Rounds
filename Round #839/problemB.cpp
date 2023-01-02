#include<bits/stdc++.h>
#define ll long long 
using namespace std;
int main(){
  ll t;
  cin >> t;
  // cout << t << endl;
  while(t--){
    vector<vector<ll>>arr(2,vector<ll>(2));
    for(ll i = 0;i < 2;i++){
      for(ll j = 0;j < 2;j++){
        cin >> arr[i][j];
      }
    }
    // for(ll i = 0;i < 2;i++){
    //   for(ll j = 0;j < 2;j++){
    //     cout << arr[i][j] << " ";
    //   }
    //   cout << endl;
    // }
    int signal = 0;
    vector<ll>arr1;
    arr1.push_back(arr[0][0]);
    arr1.push_back(arr[0][1]);
    arr1.push_back(arr[1][1]);
    arr1.push_back(arr[1][0]);
    ll pos = min_element(arr1.begin(),arr1.end()) - arr1.begin();
    // cout << pos << endl;
    if(pos == 0){
      if(arr1[1] < arr1[2] && arr1[3] < arr1[2]){

      }
      else{
        signal = 1;
      }
    }
    else if(pos == 1){
      if(arr1[2] < arr1[3] && arr1[0] < arr1[3]){

      }
      else{
        signal = 1;
      }
    }
    else if(pos == 2){
      if(arr1[3] < arr1[0] && arr1[1] < arr1[0]){

      }
      else{
        signal = 1;
      }
    }
    else if(pos == 3){
      if(arr1[0] < arr1[1] && arr1[2] < arr1[1]){

      }
      else{
        signal = 1;
      }
    }
    if(signal == 1){
      cout << "NO" << endl;
    }
    else{
      cout << "YES" << endl;
    }
  }
}