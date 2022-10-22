#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
    ll t;
    cin >> t;
    while(t--){
        ll n;
        cin >> n;
        vector<ll>arr1(n),arr2(n);
        for(ll i = 0;i < n;i++){
            cin >> arr1[i];
        }
        for(ll i = 0;i < n;i++){
            cin >> arr2[i];
        }
        ll c1 = 0,ct1 = 0,c0 = 0,ct0 = 0;
        for(ll i = 0;i < n;i++){
            if(arr1[i] == 0){
                c0++;
            }
            else{
                c1++;
            }
        }
        for(ll i = 0;i < n;i++){
            if(arr2[i] == 0){
                ct0++;
            }
            else{
                ct1++;
            }
        }
        if(ct0 == c0){
            int signal = 0;
            for(ll i = 0;i < n;i++){
                if(arr1[i] != arr2[i]){
                    signal = 1;
                    break;
                }
            }
            if(signal == 1){
                cout << 1 << endl;
            }
            else{
                cout << 0 << endl;
            }
        }
        if(ct0 > c0){
            ll op = 0;
            for(ll i = 0;i < n;i++){
                if(ct0 == c0){
                    break;
                }
                if(arr1[i] == 1 && arr2[i] == 0){
                    c0++;
                    c1--;
                    arr1[i] = 0;
                    op++;
                }
            }
            int signal = 0;
            for(ll i = 0;i < n;i++){
                if(arr1[i] != arr2[i]){
                    signal = 1;
                    break;
                }
            }
            if(signal == 1){
                cout << op + 1 << endl;
            }
            else{
                cout << op << endl;
            }
        }
        if(ct0 < c0){
            ll op = 0;
            for(ll i = 0;i < n;i++){
                if(ct0 == c0){
                    break;
                }
                if(arr1[i] == 0 && arr2[i] == 1){
                    op++;
                    c0--;
                    c1++;
                    arr1[i] = 1;
                }
            }
            int signal = 0;
            for(ll i = 0;i < n;i++){
                if(arr1[i] != arr2[i]){
                    signal = 1;
                    break;
                }
            }
            if(signal == 1){
                cout << op + 1 << endl;
            }
            else{
                cout << op << endl;
            }
        }
    }
}