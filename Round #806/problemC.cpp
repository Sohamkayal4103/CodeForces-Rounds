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
    for(ll i= 0;i < n;i++){
      cin >> arr[i];
      arr[i] += 10;
    }
    for(ll i =0;i < n;i++){
      ll a;
      cin >> a;
      string s;
      cin >> s;
      ll count = 0;
      for(ll j = 0;j < a;j++){
        if(s[j] == 'D'){
          count++;
        }
        else{
          count--;
        }
      }
      arr[i] = (arr[i]+count)%10;
    }
    for(ll i =0;i < n;i++){
      
      cout << arr[i] << " ";
    }
    cout << endl;
  }
}