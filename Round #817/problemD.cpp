#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
    ll t;
    cin >> t;
    while(t--){
        ll n;
        cin >> n;
        string s;
        cin >> s;
        if(n == 1){
            cout << 0 << endl;
            continue;
        }
        vector<ll>arr(n);
        ll val = 0;
        ll left = 0,right = n-1;
        for(ll i = 0;i < n;i++){
            if(s[i] == 'L'){
                arr[i] = left;
            }
            else if(s[i] == 'R'){
                arr[i] = right;
            }
            val += arr[i];
            left++;
            right--;
        }
        ll p1 = 0,p2 = n-1;
        vector<ll>v1;
        while(p1 < p2){
            if(s[p2] == 'R'){
                v1.push_back(p2);
            }
            if(s[p1] == 'L'){
                v1.push_back(p1);
            }
            p1++;
            p2--;
        }
        // sort(v1.begin(),v1.end());
        vector<ll>ans(n,val);
        ll ct = 0;
        for(ll i = 0;i < n;i++){

        }
        for(ll i = 0;i < v1.size();i++){
            ll pos = v1[i];
            val -= arr[pos];
            ll rep = n-1-arr[pos];
            val += rep;
            ans[i] = val;
            ct++;
        }
        for(ll i = ct;i < n;i++){
            ans[i] = ans[i-1];
        }
        for(auto it : ans){
            cout << it << " ";
        }
        cout << endl;
    }
}