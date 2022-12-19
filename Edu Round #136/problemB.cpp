#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
    ll t;
    cin >> t;
    while(t--){
        ll n;
        cin >> n;
        vector<ll>d(n);
        for(ll i = 0;i < n;i++){
            cin >> d[i];
        }
        vector<ll>arr(n,-1);
        arr[0] = d[0];
        int signal = 0;
        for(ll i = 1;i < n;i++){
            ll temp1 = arr[i-1] + d[i];
            // cout << "temp1 is: " << temp1 << endl;
            if(d[i] != 0){
                d[i] *= -1;
                ll temp2 = d[i] + arr[i-1];
                // cout << "temp2 is: " << temp2 << " at i = "<< i << endl;
                if(temp2 >= 0){
                    signal = 1;
                    break;
                }
                else{
                    arr[i] = temp1;
                }
            }
            else{
                arr[i] = temp1;
            }
        }
        if(signal == 1){
            cout << -1 << endl;
        }
        else{
            for(auto it : arr){
                cout << it << " ";
            }
            cout << endl;
        }
    }
}