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
        vector<ll>v1;
        for(ll i = 1;i <= n;i++){
            ll temp = i;
            ll ct = 0;
            while(temp % 2 == 0){
                ct++;
                temp /= 2;
            }
            v1.push_back(ct);
        }
        sort(v1.begin(),v1.end());
        reverse(v1.begin(),v1.end());
        // ll sum = 0;
        // for(ll i = 0;i < v1.size();i++){
        //     sum += v1[i];
        //     v1[i] = sum;
        // }
        ll ct = 0;
        for(ll i = 0;i < n;i++){
            ll temp = arr[i];
            while(temp % 2 == 0){
                ct++;
                temp /= 2;
            }
        }
        ll diff = n - ct;
        ll op = 0;
        for(ll i = 0;i < n;i++){
            if(diff <= 0){
                break;
            }
            diff -= v1[i];
            op++;
        }
        if(diff > 0){
            op = -1;
        }
        cout << op << endl;
    }
}