#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
    ll t;
    cin >> t;
    while(t--){
        vector<ll>arr(3);
        for(ll i = 0;i < 3;i++){
            cin >> arr[i];
        }
        sort(arr.begin(),arr.end());
        if(arr[0] + arr[1] == arr[2]){
            cout << "YES" << endl;
        }
        else{
            cout << "NO" << endl;
        }
    }
}