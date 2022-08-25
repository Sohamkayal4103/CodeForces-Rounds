#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
  ll t;
  cin >> t;
  while(t--){
    ll n,k,b,s;
    cin >> n >> k >> b >> s;
    vector<ll>arr(n);
    ll i = 0; 
    if(s/k < b){
      cout << -1 << endl;
    }
    else{
      while((s/k) > b && i < n){
        arr[i] = (k-1);
        s -= (k-1);
        // cout << s << endl;
        i++;
      }
      if(i == n){
        cout << -1 << endl;
      }
      else{
        arr[i] = s;
        for(auto it : arr){
          cout << it << " ";
        }
        cout << endl;
      }
    }
  }
}