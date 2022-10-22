#include<bits/stdc++.h>
#define ll long long
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
        vector<ll>arr1(n+1);
        arr1[0] = arr[0];
        arr1[n] = arr[n-1];
        for(ll i = 1;i < n;i++){
            arr1[i] = lcm(arr[i],arr[i-1]);
        }
        int signal = 0;
        for(ll i = 0;i < n;i++){
            if(arr[i] != __gcd(arr1[i],arr1[i+1])){
                signal = 1;
                break;
            }
        }
        if(signal == 1){
            cout << "NO" << endl;
        }
        else{
            cout << "YES" << endl;
        }
    }
}