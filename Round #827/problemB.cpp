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
            cin >>arr[i];
        }
        sort(arr.begin(),arr.end());
        int signal = 0;
        for(ll i = 0;i < n-1;i++){
            if(arr[i] == arr[i+1]){
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