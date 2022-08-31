#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
    ll t;
    cin >> t;
    while(t--){
        ll n;
        cin >> n;
        vector<string>arr1(n);
        vector<string>arr2(n);
        vector<string>arr3(n);
        for(ll i = 0;i < n;i++){
            cin >> arr1[i];
        }
        for(ll i = 0;i < n;i++){
            cin >> arr2[i];
        }
        for(ll i = 0;i < n;i++){
            cin >> arr3[i];
        }
        map<string,ll>mpp;
        for(auto it : arr1){
            mpp[it]++;
        }
        for(auto it : arr2){
            mpp[it]++;
        }
        for(auto it : arr3){
            mpp[it]++;
        }
        ll n1 = 0,n2 = 0,n3 = 0;
        for(ll i = 0;i < n;i++){
            if(mpp[arr1[i]] == 1){
                n1 += 3;
            }
            else if(mpp[arr1[i]] == 2){
                n1 += 1;
            }
        }
        for(ll i = 0;i < n;i++){
            if(mpp[arr2[i]] == 1){
                n2 += 3;
            }
            else if(mpp[arr2[i]] == 2){
                n2 += 1;
            }
        }
        for(ll i = 0;i < n;i++){
            if(mpp[arr3[i]] == 1){
                n3 += 3;
            }
            else if(mpp[arr3[i]] == 2){
                n3 += 1;
            }
        }
        cout << n1 << " " << n2 << " " << n3 << endl;
    }
}