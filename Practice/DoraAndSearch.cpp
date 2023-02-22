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
    for(ll i = 0;i < n;i++){
      cin >> arr[i];
    }
    vector<ll>arr1 = arr;
    sort(arr1.begin(),arr1.end());
    ll p1 = 0,p2 = arr.size() - 1,p3 = 0,p4 = arr.size() - 1;
    while(p1 < p2){
      if(arr[p1] == arr1[p3]){
        p1++;
        p3++;
      }
      else if(arr[p1] == arr1[p4]){
        p1++;
        p4--;
      }
      else if(arr[p2] == arr1[p3]){
        p3++;
        p2--;
      }
      else if(arr[p2] == arr1[p4]){
        p2--;
        p4--;
      }
      else{
        break;
      }
    }
    if(p1 < p2){
      cout << p1 + 1 << " " << p2 + 1 << endl;
    }
    else{
      cout << -1 << endl;
    }
  }
}