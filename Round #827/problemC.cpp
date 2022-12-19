#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
    ll t;
    cin >> t;
    while(t--){
        vector<vector<char>>arr(8,vector<char>(8));
        for(ll i = 0;i < 8;i++){
            for(ll j = 0;j < 8;j++){
                cin >> arr[i][j];
            }
        }
        int signal = 0;
        for(ll i = 0;i < 8;i++){
            ll ct = 0;
            for(ll j = 0;j < 8;j++){
                if(arr[i][j] == 'R'){
                    ct++;
                }
            }
            if(ct == 8){
                signal = 1;
            }
        }
        if(signal == 1){
            cout << "R" << endl;
            continue;
        }
        else{
            cout << "B" << endl;
        }
        
    }
}