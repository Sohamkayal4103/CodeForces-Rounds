#include<bits/stdc++.h>
#define ll long long 
using namespace std;
int main(){
    ll t;
    cin >> t;
    while(t--){
        ll n;
        cin >> n;
        vector<vector<ll>>arr(n,vector<ll>(n));
        for(ll i = 0;i < n;i++){
            for(ll j = 0;j < n;j++){
                cin >> arr[i][j];
            }
        }
        
        int signal = 0,ct = -1;
        vector<ll>arr1(n,-1);
        for(ll i = 0;i< n;i++){
            signal = 0,ct = -1;
            for(ll j = 0;j < i;j++){
                if(ct == 1 && arr[j][i] == 2){
                    signal = 1;
                    break;
                }
                else{
                    ct = arr[j][i];
                }
            }
            if(signal != 1){
                arr1[i] = ct;
            }
        }
        for(ll i = 1;i < n;i++){
            if(arr1[i-1] == 1 && arr1[i] == 2){
                signal = 1;
                break;
            }
        }
        if(signal == 1){
            cout << 0 << endl;
        }
        else{
            vector<ll>arr2(n);
            for(ll i = 0;i < n;i++){
                for(ll j = 0;j < i;j++){
                    if(arr[j][i] == 2 && ct == 1){
                        signal = 1;
                        break;
                    }
                    else if(arr[j][i] == 2){
                        ll diff = abs(j-i+1);
                        
                    }
                }
            }
        }

    }
}