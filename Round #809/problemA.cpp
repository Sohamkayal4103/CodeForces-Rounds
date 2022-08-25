#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
  ll t;
  cin >> t;
  while(t--){
    ll n,m;
    cin >> n >> m;
    vector<ll>arr(n);
    for(ll i = 0;i < n;i++){
      cin >> arr[i];
    }
    string s = "";
    for(ll i = 0;i < m;i++){
      s += "B";
    }
    for(ll i = 0;i < n;i++){
      ll firstOption = arr[i]-1,secondOption = (m+1-arr[i])-1;
      if(firstOption < secondOption){
        if(s[firstOption] != 'A'){
          s[firstOption] = 'A';
        }
        else s[secondOption] = 'A';
      }
      else{
        if(s[secondOption] != 'A') s[secondOption] = 'A';
        else s[firstOption] = 'A';
      }
    }
    cout << s << endl;
  }
}