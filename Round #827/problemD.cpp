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
        ll ct = 0;
        for(ll i = 0;i < n;i++){
            if(arr[i] % 2 == 0){
                ct++;
            }
        }
        if(ct == n){
            cout << -1 << endl;
        }
        else{
            ll ev1 = -1,od1 = -1;
            vector<ll>v1;
            for(ll i = 0;i < n;i++){
                if(arr[i] % 2 == 0){
                    ev1 = i;
                }
                else if(arr[i] % 2 == 1){
                    od1 = i;
                    v1.push_back(i);
                }
            }
            ll temp = -1;
            int signal = 0;
            // for(ll i = n-1;i >= 0;i--){
            //     if(__gcd(arr[i],arr[od1]) == 1){
            //         temp = i;
            //         signal = 1;
            //         break;
            //     }
            // }
            // if(signal == 1){
            //     cout << (od1+1) + (temp+1) << endl;
            // }
            // else{
            //     cout << -1 << endl;
            // }
            // cout << (od1+1) + (temp+1) << endl;
            ll temp2;
            for(ll i = v1.size()-1;i >= 0;i--){
                for(ll j = n-1;j >= 0;j--){
                    if(__gcd(arr[j],arr[v1[i]]) == 1){
                        // cout << "gcd: "<< arr[j] << " " << arr[v1[i]] << endl;
                        temp = j;
                        signal = 1;
                        break;
                    }
                }
                if(signal == 1){
                    temp2 = v1[i];
                    break;
                }
            }
            if(signal == 1){
                // cout << temp << " " << temp2 << endl;
                cout << (temp + 1) + (temp2 + 1) << endl;
            }
            else{
                cout << -1 << endl;
            }
        }
    }
}