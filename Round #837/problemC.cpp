#include<bits/stdc++.h>
#define ll long long 
#define mo 10^9+7
using namespace std;
int main(){
    ll t;
    cin >> t;
    while(t--){
        ll n;
        cin >> n;
        vector<ll>arr(n);
        for(ll i = 0;i < n;i++){
            cin >> arr[i];
        }
        ll prod = arr[0];
        int signal = 0;
        for(ll i = 1;i < n;i++){
            if(__gcd(prod,arr[i]) >= 2){
                // cout << "Followed this" << endl;
                signal = 1;
                prod = lcm(arr[i],prod);
            }
            else{
                prod = lcm(arr[i],prod);
            }
        }
        if(signal == 1){
            cout << "YES" << endl;
        }
        else{
            cout << "NO" << endl;
        }
    }
}