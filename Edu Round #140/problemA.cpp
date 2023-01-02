#include<bits/stdc++.h>
#define ll long long 
using namespace std;
int main(){
    ll t;
    cin >> t;
    while(t--){
        vector<pair<ll,ll>>arr;
        for(ll i = 0;i < 3;i++){
            ll a,b;
            cin >> a >> b;
            arr.push_back(make_pair(a,b)); 
        }
        ll temp1 = -1,temp2 = -1;
        for(ll i = 1;i < 3;i++){
            ll y = abs(arr[0].second - arr[i].second);
            ll x = abs(arr[0].first - arr[i].first);
            // cout << x << " " << y << endl;
            if(x == 0){
                temp1 = 1;
            }
            if(y == 0){
                temp2 = 1;
            }
        }
        ll y1 = abs(arr[1].second - arr[2].second);
        ll x1 = abs(arr[1].first - arr[2].first);
        // cout << x1 << " " << y1 << endl;
        if(x1== 0){
            temp1 = 1;
        }
        if(y1 == 0){
            temp2 = 1;
        }
        if(temp1 == 1 && temp2 == 1){
            cout << "NO" << endl;
        }
        else{
            cout << "YES" << endl;
        }

    }
}