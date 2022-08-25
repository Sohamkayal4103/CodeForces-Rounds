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
    ll ans = LLONG_MAX;
    for(ll i= 0;i < n;i++){
      cin >> arr[i];
    }
    if(n % 2 == 1){
      ans = 0;
      for(ll i = 1;i < n;i+=2){
        ans += max(0ll,max(arr[i-1],arr[i+1])-arr[i]+1);
      }
      
    }
    else{
      vector<ll>prefix(n+1,0),suffix(n,0);
      for(ll i = 1;i < n-1;i+=2){
        prefix[i+1] = prefix[i-1] + max(0ll,max(arr[i-1],arr[i+1])-arr[i]+1);
      }
      for(ll i = n-2;i > 0;i-=2){
        suffix[i-1] = suffix[i+1] + max(0ll,max(arr[i-1],arr[i+1])-arr[i]+1);
      }
      
      for(ll i = 0;i < n;i+=2){
        ans = min(ans,prefix[i]+suffix[i+1]);
      }
    }
    cout << ans << endl;
  }


  // 2 1 2
  // 0 2 0
}