#include<bits/stdc++.h>
#define ll long long 
using  namespace std;
int main(){
  ll t;
  cin >> t;
  while(t--){
    ll n,k;
    cin >> k >> n;
    vector<ll>arr;
    int signal = 0;
    arr.push_back(1);
    ll prev = arr[0],diff = 1;
    while(arr.size() < k){
      ll temp = diff + prev;
      ll rem = n - temp;
      if(rem < k - arr.size() - 1){
        signal = 1;
        break;
      }
      else if(temp < n){
        arr.push_back(temp);
        prev = temp;
        diff++;
      }
      else if(temp == n){
        arr.push_back(temp);
        if(arr.size() < k){
          signal = 1;
          break;
        }
      }
      else{
        arr.push_back(n);
        if(arr.size() < k){
          signal = 1;
          break;
        }
      }
    }
    if(signal == 1){
      while(arr.size() < k){
        ll p1 = arr[arr.size() - 1];
        p1++;
        arr.push_back(p1);
      }
    }
    for(auto it : arr){
      cout << it << " ";
    }
    cout << endl;
  }
}