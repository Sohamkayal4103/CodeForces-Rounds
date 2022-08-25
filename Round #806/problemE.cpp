#include<bits/stdc++.h>
#define ll long long
using namespace std;

ll countNum(vector<char>v1,vector<char>v2,vector<char>v3,vector<char>v4){
  ll countz = 0,count = 0;
  for(ll i = 0;i < v1.size();i++){
    countz = 0; 
    if(v1[i] == '0'){
      countz++;
    }
    if(v2[i] == '0'){
      countz++;
    }
    if(v3[i] == '0'){
      countz++;
    }
    if(v4[i] == '0'){
      countz++;
    }
    if(countz == 1){
      count += 1;
    }
    else if(countz == 2){
      count += 2;
    }
    else if(countz == 3){
      count += 1;
    }
    else if(countz == 4){
      count += 0;
    }
  }
  return count;
}


int main(){
  ll t;
  cin >> t;
  while(t--){
    ll n;
    cin >> n;
    vector<string>arr(n+1);
    for(ll i =1;i <= n;i++){
      cin >> arr[i];
    }
    for(ll i =1;i <= n;i++){
      cout << arr[i] << endl;
    }
    ll i = 1;
    ll count = 0;
    while(i <= n/2){
      ll p1x = i,p1y=i;
      ll p2x = n,p2y=i;
      ll p3x = n,p3y=n;
      ll p4x = i,p4y=n;
      vector<char> v1;
      vector<char> v2;
      vector<char> v3;
      vector<char> v4;
      for(ll temp = 1;temp <= n-((i-1)*2);temp++){
        v1.push_back(arr[p1x][p1y]);
        v2.push_back(arr[p2x][p2y]);
        v3.push_back(arr[p3x][p3y]);
        v4.push_back(arr[p4x][p4y]);
        p1x++;
        p2y++;
        p3x--;
        p4y--;
        
      }
      for(auto it : v1){
        cout << it << " ";
      }
      cout << endl;
      for(auto it : v2){
        cout << it << " ";
      }
      cout << endl;
      for(auto it : v3){
        cout << it << " ";
      }
      cout << endl;
      for(auto it : v4){
        cout << it << " ";
      }
      cout << endl;
      count += countNum(v1,v2,v3,v4);
      cout << "count: " << countNum(v1,v2,v3,v4) << endl;
      i++; 
    }
    cout << count << endl;
  }
}