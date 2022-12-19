#include<bits/stdc++.h>
#define ll long long 
using namespace std;
int main(){
    ll t;
    cin >> t;
    while(t--){
        ll n,c;
        cin >> n >> c;
        vector<ll>arr(n);
        for(ll i = 0;i < n;i++){
            cin >> arr[i];
        }
        ll temp = *max_element(arr.begin(),arr.end());
        vector<ll>v1(temp+1,0);
        for(ll i = 0;i < n;i++){
            v1[arr[i]]++;
        }
        ll cost = 0;
        for(ll i = 1;i <= temp;i++){
            cost += min(v1[i],c);
        }
        cout << cost << endl;
    }
}