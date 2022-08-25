#include<bits/stdc++.h>
#define ll long long
using namespace std;

pair<ll,string>solve(ll i,vector<ll>arr,ll iq,string &s,ll count){
  if(i == arr.size()){
    return make_pair(count,s);
  }
  else if(iq == 0){
    return make_pair(count,s);
  }
  else if(arr[i] <= iq){
    pair<ll,string>p1;
    s[i] = '1';
    return p1 = solve(i+1,arr,iq,s,count+1);
  }
  else{
    pair<ll,string>p1,p2;
    s[i] = '1';
    p1 = solve(i+1,arr,iq--,s,count+1);
    s[i] = '0';
    p2 = solve(i+1,arr,iq,s,count);
    if(p1.first > p2.first){
      return p1;
    }
    else{
      return p2;
    }
  }
}


int main(){
  ll t;
  cin >> t;
  while(t--){
    ll n,iq;
    cin >> n >> iq;
    vector<ll>arr(n);
    for(ll i =0;i < n;i++){
      cin >> arr[i];
    }
    string s = "";
    for(ll i = 0;i < n;i++){
      s += "0";
    }
    pair<ll,string> p1= solve(0,arr,iq,s,0);
    cout << p1.second << endl;
  }
}