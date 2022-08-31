#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
    ll t;
    cin >> t;
    while(t--){
        ll m;
        cin >> m;
        vector<vector<char>>arr(2,vector<char>(m));
        for(ll i = 0;i < 2;i++){
            for(ll j = 0;j < m;j++){
                cin >> arr[i][j];
            }
        }
        int signal = 0;
        for(ll i = 0;i < m;i++){
            if(arr[0][i] == 'R' || arr[1][i] == 'R'){
                if(arr[0][i] != arr[1][i]){
                    signal = 1;
                    // cout << "Failed at : " << i << endl;
                    break;
                }
            }
        }
        if(signal == 1){
            cout << "NO" << endl;
        }
        else{
            cout << "YES" << endl;
        }
    }
} 