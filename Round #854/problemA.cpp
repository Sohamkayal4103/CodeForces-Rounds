#include<bits/stdc++.h>
#define ll long long 
using namespace std;

int main(){
  ll t;
  cin >> t;
  while(t--){
    ll n,m;
    cin >> n >> m;
    ll p1 = n;
    set<ll>st;
    vector<ll>arr(n+1,-1);
    ll ti = 1;
    for(ll i = 0;i < m;i++){
      ll x;
      cin >> x;
      if(st.find(x) == st.end()){
        st.insert(x);
        if(p1 >= 0 && p1 <= n){
          arr[p1] = ti;
        }
        ti++;
        p1--;
      }
      else{
        ti++;
      }
    }
    for(ll i = 1;i <= n;i++){
      cout << arr[i] << " ";
    }
    cout << endl;
  }
}