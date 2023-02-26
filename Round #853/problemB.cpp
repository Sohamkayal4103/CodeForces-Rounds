#include<bits/stdc++.h>
#define ll long long 
using namespace std;
int main(){
  ll t;
  cin >> t;
  while(t--){
    ll n;
    cin >> n;
    string s;
    cin >> s;
    ll p1 = -1,p2 = -1;
    if(n % 2 == 0){
      p2 = n/2;
      p1 = p2 - 1;
    }
    else{
      ll temp = n / 2;
      p2 = temp + 1;
      p1 = temp - 1;
    }
    int signal = 0;
    vector<ll>arr;
    while(p2 < n && p1 >= 0){
      if(s[p1] != s[p2]){
        arr.push_back(p2);
      }
      p2++;
      p1--;
    }
    if(arr.size() <= 1){
      cout << "Yes" << endl;
    }
    else{
      int signal = 0;
      for(ll i = 1;i < arr.size();i++){
        if(arr[i]-1 != arr[i-1]){
          signal = 1;
          break;
        }
      }
      if(signal == 1){
        cout << "No" << endl;
      }
      else{
        cout << "Yes" << endl;
      }
    }
  }
}