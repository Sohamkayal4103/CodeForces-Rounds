#include<bits/stdc++.h>
#define ll long long
using namespace std;
int  main(){
    ll t;
    cin >> t;
    while(t--){
        ll n,q;
        cin >> n >> q;
        vector<ll>arr(n);
        ll ct1 = 0,ct2 = 0;
        for(ll i = 0;i < n;i++){
            cin >> arr[i];
        }
        // for(auto it : arr){
        //     cout << it << " ";
        // }
        // cout << endl;
        for(ll i = 0;i < n;i++){
            if(arr[i] % 2 == 0){
                ct1++;
            }
            else{
                ct2++;
            }
        }
        ll sum = 0;
        for(ll i = 0;i < n;i++){
            sum += arr[i];
        }
        // cout << sum << " " << ct2 << endl;
        for(ll i = 0;i < q;i++){
            ll op,num;
            cin >> op >> num;
            if(op == 0 && num % 2 == 0){
                sum += (ct1 * num);
            }
            else if(op == 0 && num % 2 == 1){
                sum += (ct1 * num);
                ct2 += ct1;
                ct1 = 0;
            }
            if(op == 1 && num % 2 == 0){
                sum += (ct2 * num);
            }
            else if(op == 1 && num % 2 == 1){
                sum += (ct2 * num);
                ct1 += ct2;
                ct2 = 0;
            }
            cout << sum << endl;
        }
    }
}