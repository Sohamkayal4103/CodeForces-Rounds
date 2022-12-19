#include<bits/stdc++.h>
#define ll long long 
using namespace std;
int main(){
    ll t;
    cin >> t;
    while(t--){
        ll n;
        cin >> n;
        // vector<ll>arr(n);
        ll sum = 0;
        for(ll i = 0;i < n;i++){
            ll x;
            cin >> x;
            sum += x;
        }
        if(sum < 0){
            sum *= -1;
        }
        cout << sum << endl;
    }
}