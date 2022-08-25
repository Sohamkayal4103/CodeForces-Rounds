#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
  ll t;
  cin >> t;
  while(t--){
    string s;
    cin >> s;
    int flag = 0;
    if(s[0] == 'Y' || s[0] == 'y'){
      
    }
    else{
      flag = 1;
    }
    if(s[1] == 'E' || s[1] == 'e'){
      
    }
    else{
      flag = 1;
    }
    if(s[2] == 'S' || s[2] == 's'){
      
    }
    else{
      flag = 1;
    }
    if(flag == 0){
      cout << "YES" << endl;
    }
    else{
      cout << "NO" << endl;
    }
  }
}