#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
    ll t;
    cin >> t;
    while(t--){
        ll n,m;
        cin >> n >> m;
        vector<ll>arr(n);
        for(ll i = 0;i < n;i++){
            cin >> arr[i];
        }
        ll k;
        cin >> k;
        vector<ll>arr2(k);
        for(ll i = 0;i < k;i++){
            cin >> arr2[i];
        }
        vector<ll>v1(n);
        for(ll i = 0;i < n;i++){
            ll ct = 1;
            while(arr[i] % m == 0){
                arr[i] /= m;
                ct *= m;
            }
            // for(ll j = 0;j < ct;j++){
            //     v1.push_back(arr[i]);
            // }
            v1[i] = ct;
        }
        vector<ll>v2(k);
        for(ll i = 0;i < k;i++){
            ll ct = 1;
            while(arr2[i] % m == 0){
                arr2[i] /= m;
                ct *= m;
            }
            // for(ll j = 0;j < ct;j++){
            //     v2.push_back(arr2[i]);
            // }
            v2[i] = ct;
        }
        // cout << "check: " << endl;
        // for(auto it : v1){
        //     cout << it << " ";
        // }
        // cout << endl;
        // for(auto it : v2){
        //     cout << it << " ";
        // }
        // cout << endl;
        ll i = 0,j = 0;
        while(1){
            if(i >= n && j >= k){
                cout << "Yes" << endl;
                break;
            }
            if(i >= n || j >= k){
                cout << "No" << endl;
                break;
            }
            if(arr[i] != arr2[j]){
                cout << "No" << endl;
                break;
            }
            ll temp = min(v1[i],v2[j]);
            v1[i] -= temp;
            v2[j] -= temp;
            if(v1[i] == 0)i++;
            if(v2[j] == 0)j++;
            
        }
        // if(v1.size() == v2.size()){
        //     int signal = 0;
        //     for(ll i = 0;i < v1.size();i++){
        //         if(v1[i] != v2[i]){
        //             signal = 1;
        //             break;
        //         }
        //     }
        //     if(signal == 1){
        //         cout << "No" << endl;
        //     }
        //     else{
        //         cout << "Yes" << endl;
        //     }
        // }
        // else{
        //     cout << "No" << endl;
        // }
        // for(auto it : v1){
        //     cout << it << " ";
        // }
        // cout << endl;
        // ll p1 = 0,p2 = 0;
        // int signal = 0;
        // while(p1 < v1.size() && p2 < arr2.size()){
        //     if(v1[p2] == arr2[p2]){
        //         p1++;
        //         p2++;
        //     }
        //     else if(v1[p1] < arr2[p2]){
        //         if(v1[p1] * m == arr[p2]){
        //             ll ct = 0,temp = 0;
        //             while(ct < m && temp < m){
        //                 if(ct == 0){
        //                     ct++;
        //                     p1++;
        //                 }
        //                 else{   
        //                     if(v1[p1] == v1[p1-1]){
        //                         ct++;
        //                         p1++;
        //                     }
        //                     else{
        //                         cout << "Loop broke here" << endl;
        //                         break;  
        //                     }
        //                 }
        //                 temp++;
        //             }
        //             if(ct < m){

        //                 signal = 1;
        //                 break;
        //             }
        //             p2++;
        //         }
        //         else{
        //             cout << "Loop broke here" << endl;
        //             signal = 1;
        //             break;
        //         }
        //     }
        //     else{
        //         cout << "Loop broke here" << endl;
        //         signal = 1;
        //         break;
        //     }
        // }
        // if(signal == 1){
        //     cout << "No" << endl;
        // }
        // else{
        //     cout << "Yes" << endl;
        // }
    }
}