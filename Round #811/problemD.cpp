#include<bits/stdc++.h>
#define ll long long
using namespace std;

class comparator_class {
public:
    // Comparator function
    bool operator()(string &a,string &b)
    {
  
        // There can be any condition
        // implemented as per the need
        // of the problem statement
        return (a.length() < b.length());
    }
};

int main(){
  comparator_class help;
  ll t;
  cin >> t;
  while(t--){
    string s;
    cin >> s;
    ll n;
    cin >> n;
    vector<string>arr;
    for(ll i = 0;i < n;i++){
      string a;
      cin >> a;
      arr.push_back(a);
    }
    sort(arr.begin(), arr.end(),help);
    // for(ll i = 0;i < n;i++){
    //   cout << arr[i] << endl;
    // }
    vector<vector<ll>>arr1(n);
    for(ll i = n-1;i >= 0;i--){
      string s1 = arr[i];
      for(ll j = 0;j <= s.length()-s1.length();j++){
        ll ct = 0;  
        ll temp = j;
        for(ll k = 0;k < s1.length();k++){
          if(s1[k] == s[temp]){
            ct++;
            temp++;
          }
        }
        if(ct == s1.length()){
          arr1[i].push_back(j);
        }
      }
    }
    // for(ll i = 0;i < n;i++){
    //   for(ll j = 0;j < arr1[i].size();j++){
    //     cout << arr1[i][j] << " ";
    //   }
    //   cout << endl;
    // }
    set<pair<ll,ll>>st;
    ll ct = 0;
    for(ll i = 0;i < s.length();i++){
      for(ll j = n-1;j >= 0;j--){
        int signal = 0; 
        for(ll k = 0;k < arr1[j].size();k++){
          if(i >= arr1[j][k] && i <= arr1[j][k]+arr[j].length()-1){
            st.insert(make_pair(j,arr1[j][k]));
            signal = 1;
            break;
          }
        }
        if(signal == 1){
          ct++;
          break;
        }
      }
    }
    if(ct < n){
      cout << -1 << endl;
    }
    else{
      cout << st.size() << endl;
      for(auto it : st){
        cout << it.first+1 << " " << it.second+1 << endl;
      }
    }
  }
}