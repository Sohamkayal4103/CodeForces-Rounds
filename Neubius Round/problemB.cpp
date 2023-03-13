#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
  ll t;
  cin >> t;
  while(t--){
    ll n,k,d,w;
    cin >> n >> k >> d >> w;
    vector<ll>arr(n);
    for(ll i = 0;i < n;i++){
      cin >> arr[i];
    }
    ll p1 = 0,ans = 0;
    int signal = 0;
    ll endTime = -1,k1 = k;
    while(p1 < arr.size()){
      if(signal == 0){
        endTime = arr[p1] + w + d;
        signal = 1;
        k1 = k;
        ans++;
      }
      else{
        if(endTime >= arr[p1] && k1 > 0){
          p1++;
          k1--;
        }
        else{
          signal = 0;
        }
      }
    }
    cout << ans << endl;
  }
}