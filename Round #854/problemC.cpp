#include<bits/stdc++.h>
#define ll long long 
using namespace std;
int main(){
  ll t;
  cin >> t;
  while(t--){
    string s;
    cin >> s;
    vector<ll>arr(26,0);
    for(ll i = 0;i < s.length();i++){
      arr[s[i] - 'a']++;
    }
    
    string ans;
    for(ll i = 0;i < 26;i++){
      if(arr[i] == 1)continue;
      ll temp = arr[i] / 2;
      // if(arr[i] % 2 == 1){
      //   temp++;
      // }
      arr[i] -= temp;
      for(ll j = 0;j < temp;j++){
        ans += ('a' + i);
      }
    }
      vector<ll>arr2;
      for(ll i = 0;i < 26;i++){
        if(arr[i] == 1){
          arr2.push_back(i);
          arr[i] = 0;
        }
      }
      if(arr2.size() > 0){
        // cout << "f this" << endl;
        if(arr2.size() % 2 == 0){
          
          ll p2 = arr2.size() / 2;
          ll p1 = p2 - 1;
          while(p2 < arr.size() && p1 >= 0){
            ans += (arr2[p2] + 'a');
            p2++;
            ans += (arr2[p1] + 'a');
            p1--;
          }
        }
        else{
          ll p2 = arr2.size() / 2;
          ll p1 = p2 - 1;
          ans += (arr2[p2] + 'a');
          p2++;
          while(p2 < arr.size() && p1 >= 0){
            ans += (arr2[p2] + 'a');
            p2++;
            ans += (arr2[p1] + 'a');
            p1--;
          }
        }
      }
    for(ll i = 25;i >= 0;i--){
      // if(arr[i] == 1)continue;
      for(ll j = 0;j < arr[i];j++){
        ans += ('a' + i);
      }
    }
    cout << ans << endl;
  }
}