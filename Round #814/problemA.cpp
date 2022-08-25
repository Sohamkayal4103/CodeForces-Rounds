#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
  ll t;
  cin >> t;
  while(t--){
    ll n,m;
    cin >> n >> m;
    if(n % 2 == 1 && m % 2 == 1){
      cout << "Tonya" << endl;
    }
    else if(n % 2 == 0 && m % 2 == 0){
      cout << "Tonya" << endl;
    }
    else{
      cout << "Burenka" << endl;
    }
  }
}