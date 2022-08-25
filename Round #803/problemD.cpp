#include<bits/stdc++.h>
#define ll long long
using namespace std;

ll query(ll l,ll r){
  cout << "? " << l << " " << r << endl;
    cout.flush();
 
    ll res = 0;
 
    for(ll i=l,x ; i<=r ; ++i){
        cin >> x;
        if(x<=r && x>=l)
            res++;
    }
 
    return res;
}


bool solve()
{
    ll n;
    cin >> n;
 
    ll low = 1, high = n;
 
    while(low<high){
        ll mid = (low+high)/2;
 
        ll ok = query(low,mid);
 
        if(ok&1){
            high = mid;
        }
        else{
            low = mid+1;
        }
    }
    
    cout << "! " << low << endl;
    cout.flush();
    return true;    
}
int main(){
  ll t;
  cin >> t;
  while(t--){
    ll n;
    cin >> n;
    ll low = 1,high = n;
    while(low < high){
      ll mid = (high + low) / 2;
      ll ok = query(low,mid);
      if(ok & 1){
        high = mid;
      }
      else{
        low = mid + 1;
      }
    }
    cout << "! " << low << endl;
    cout.flush();
  }
}