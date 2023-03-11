#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
  ll t;
  cin >> t;
  while(t--){
    ll n1,n2;
    cin >> n1 >> n2;
    string s1,s2;
    cin >> s1 >> s2;
    map<char,ll>mpp1,mpp2;
    for(ll i = 0;i < s1.length();i++){
      mpp1[s1[i]]++;
    }
    for(ll i = 0;i < s2.length();i++){
      mpp2[s2[i]]++;
    }
    int signal = 0;
    for(char c = 'a';c <= 'z';c++){
      if(mpp1[c] != mpp2[c]){
        signal = 1;
        break;
      }
    }
    if(signal == 1){
      cout << "NO" << endl;
    }
    else{
      cout << "YES" << endl;
      for(ll i = 0;i < n;i++){
        
      }
    }
  }
}