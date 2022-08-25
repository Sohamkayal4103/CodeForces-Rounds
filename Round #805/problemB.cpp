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
    ll day = 1,count = 0;
    for(ll i=0;i < s.length();i++){
      if(arr[s[i]-'a'] == 0){
        if(count == 3){
          count = 0;
          day++;
          // cout << "Day changed at: " << i << endl;
          for(ll j = 0;j < arr.size();j++){
            arr[j] = 0; 
          }
        }
        arr[s[i]-'a']++;
        count++;
      }
    }
    // cout << count << endl;

    cout << day << endl;
  }
}