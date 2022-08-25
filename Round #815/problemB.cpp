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
    sort(arr.begin(),arr.end());
    cout << arr[n-1]+arr[n-2]-arr[0]-arr[1] << endl;
  }
}