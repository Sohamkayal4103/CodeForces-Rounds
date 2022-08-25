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
    for(ll i = 0;i < n;i++){
      for(ll j =0;j < m;j++){
        cin >> arr[i][j];
      }
    }
    ll num = arr[0][0],i1=0,j1=0;
    for(ll i = 0;i < n;i++){
      for(ll j =0;j < m;j++){
        if(arr[i][j] > num){
          num = arr[i][j];
          i1 = i;
          j1 = j;
        }
      }
    }
    // cout << i1 << " " << j1 << endl;
    ll area1 = (i1-0+1)*(j1-0+1);
    area1 =max(area1,((n-i1)* (m-j1)));
    area1 = max(area1,((n-i1)* (j1-0+1)));
    area1 = max(area1,((i1-0+1)* (m-j1)));
    cout << area1 << endl;
  }
  return 0;
}