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
    vector<ll>arr(26,0);
    ll count = 0;
    for(ll i = 0;i < n;i++){
      if(arr[s[i]-'A'] == 0){
        count += 2;
        arr[s[i]-'A']++;
      }
      else{
        count += 1;
      }
    }
    cout << count << endl;
  }
}