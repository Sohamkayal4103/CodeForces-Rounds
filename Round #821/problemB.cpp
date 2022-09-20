#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
    ll t;
    cin >> t;
    while(t--){
        ll n,x,y;
        cin >> n >> x >> y;
        if(x != 0 && y != 0){
            cout << -1 << endl;
        }
        else if(x == 0 && y == 0){
            cout << -1 << endl;
        }
        else{
            ll w = 1;
            ll target = max(x,y);
            map<ll,ll>mpp;
            for(ll i = 2;i <= n;i++){
                if(mpp[w] == target){
                    w = i;
                    mpp[w]++;
                }
                else{
                    mpp[w]++;
                }
                
            }
            ll signal = 0;
            for(auto it : mpp){
                if(it.second != target){
                    signal = 1;
                    break;
                }
            }
            if(signal == 1){
                cout << -1 << endl;
            }
            else{
                for(auto it : mpp){
                    for(ll j = 0;j < it.second;j++){
                        cout << it.first << " ";
                    }
                }
                cout << endl;
            }
        }
    }
}