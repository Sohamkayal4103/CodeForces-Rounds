#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
  ll t;
  cin >> t;
  while(t--){
    ll n,h,m;
    cin >> n >> h >> m;
    ll slept = (60*h) + m;
    vector<ll>arr;
    for(ll i = 0;i < n;i++){
      ll a,b;
      cin >> a >> b;
      ll temp = (60*a) + b;
      arr.push_back(temp);
    }
    // cout << "This is arr:" << endl;
    // for(auto it : arr){
    //   cout << it << " ";
    // }
    // cout << endl;
    ll diff = INT_MAX;
    for(ll i = 0;i < n;i++){
      ll temp;
      ll total = 24*60;
      // cout << slept << " " << arr[i] << endl;
      if(slept > arr[i]){
        temp = total-(slept-arr[i]);
      }
      else{
        temp = arr[i] - slept;
      }
      diff = min(diff,temp);
      
    }
    // cout << diff << endl;
    ll h1 = diff/60;
    ll m1 = diff % 60; 
    cout << h1 << " " << m1 << endl;
  }
}