#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
  ll t;
  cin >> t;
  while(t--){
    ll n;
    cin >> n;
    vector<string>arr(n);
    unordered_map<string,ll>mpp;
    for(ll i =0;i < n;i++){
      cin >> arr[i];
      mpp[arr[i]]++;
    }
    int signal = 0;
    string ans = "";
    for(ll i =0;i < n;i++){
      ll n1 = arr[i].size();
      string s1 = "",s2 = "";
      for(ll j = 0;j < n1-1;j++){
        s1 = arr[i].substr(0,j+1);
        s2 = arr[i].substr(j+1,n1-s1.length());
        if(mpp[s1] > 0 && mpp[s2] > 0){
          signal = 1;
        }
      }
      if(signal == 1){
        ans += "1";
        signal = 0;
      }
      else{
        ans += "0";
      }
    }
    cout << ans << endl;
  }
}