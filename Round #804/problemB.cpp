#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
  ll t;
  cin >> t;
  while(t--){
    ll n,m;
    cin >> n >> m;
    vector<vector<ll>>arr(n,vector<ll>(m));
    ll temp = m/4;
    ll temp2 = m%4;
    vector<ll>ans={1,0,0,1};
    vector<ll>ans2={0,1,1,0};
    // cout << n << " " << m << endl;
    for(ll i =0;i < n;i++){
      if(i % 4 == 0){
        ll k = 0;
        while(k < temp){
          for(auto it : ans){
            cout << it << " ";
          }
          k++;
        }
        k = 0;
        while(k < temp2){
          cout << ans[k] << " ";
          k++;
        }
        cout << endl;
      }
      else if(i % 4 == 1){
        ll k = 0;
        while(k < temp){
          for(auto it : ans2){
            cout << it << " ";
          }
          k++;
        }
        k = 0;
        while(k < temp2){
          cout << ans2[k] << " ";
          k++;
        }
        cout << endl;
      }
      else if(i % 4 == 2){
        ll k = 0;
        while(k < temp){
          for(auto it : ans2){
            cout << it << " ";
          }
          k++;
        }
        k = 0;
        while(k < temp2){
          cout << ans2[k] << " ";
          k++;
        }
        cout << endl;
      }
      else if(i % 4 == 3){
        ll k = 0;
        while(k < temp){
          for(auto it : ans){
            cout << it << " ";
          }
          k++;
        }
        k = 0;
        while(k < temp2){
          cout << ans[k] << " ";
          k++;
        }
        cout << endl;
      }
    }
  }
}