#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
  ll t;
  cin >> t;
  while(t--){
    ll n;
    cin >> n;
    ll temp = n;
    vector<ll>arr;
    for(ll i = 0;i < temp;i++){
      if(i % 2 == 0){
        arr.push_back(n-1);
        // cout << n-1 << " ";
      }
      else{
        arr.push_back(n);
        // cout << n << " ";
        n -= 2;
      }
    }
    reverse(arr.begin(), arr.end());
    if(temp % 2 == 1){
      arr[0] = 1;
    }
    for(auto it : arr){
      cout << it << " ";
    }
    
    cout << endl;
  }

}