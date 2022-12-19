#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
    ll t;
    cin >> t;
    while(t--){
        ll n;
        cin >> n;
        vector<ll>arr1(n);
        vector<ll>arr2(n);
        for(ll i = 0;i < n;i++){
            cin >> arr1[i];
        }
        for(ll i = 0;i < n;i++){
            cin >> arr2[i];
        }
        vector<ll>p;
        for(ll i = 0;i < n;i++){
            p.push_back(arr2[i]-arr1[i]);
        }
        sort(p.begin(),p.end());
        ll p1 = 0,p2 = p.size()-1;
        ll ct = 0;
        while(p1 < p2){
            if(p[p1]+p[p2] >= 0){
                ct++;
                p1++;
                p2--;
            }
            else{
                p1++;
            }
        }
        cout << ct << endl;
    }
}