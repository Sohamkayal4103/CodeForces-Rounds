#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
  ll t;
  cin >> t;
  while(t--){
    ll n,k;
    cin >> n >> k;
    vector<ll>arr(n);
    for(int i=0;i<n;i++){
      cin >> arr[i];
    }
    ll count = 0;
    for(ll i = 1;i < n-1;i++){
      if(arr[i] > arr[i-1]+arr[i+1]){
        count++;
      }
    }
    if(k != 1){
      cout << count << endl;
    }
    else{
      n -= 2;
      if(n % 2 == 0){
        n /= 2;
      }
      else{
        n = (n/2) + 1;
      }
      ll ans = max(count,n);
      cout << ans << endl;
    }

  }
}