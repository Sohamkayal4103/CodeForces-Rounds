#include<bits/stdc++.h>
#define ll long long 
using namespace std;
int main(){
    ll t;
    cin >> t;
    while(t--){
        ll n;
        cin >> n;
        string s1,s2;
        cin >> s1 >> s2;
        vector<vector<ll>>arr(2,vector<ll>(n));
        for(ll i = 0;i < n;i++){
            arr[0][i] = s1[i];
        }
        for(ll i = 0;i < n;i++){
            arr[1][i] = s2[i];
        }
        vector<vector<bool>>dp(2,vector<bool>(n,false));
        if(arr[1][n-1] == 'B'){
            dp[1][n-1] = true;
        }
        if(arr[0][n-1] == 'B'){
            dp[0][n-1] = false;
        }
        for(ll i = n-2;i >= 0;i--){
            for(ll j = 0;j < 2;j++){
                ll ot = (j== 0 ? 1 : 0);
                if(arr[j][i] == 'B'){
                    if(arr[ot][i] == 'B'){
                        // dp[ot][i] = dp[ot][i+1];
                        dp[j][i] = dp[ot][i+1];
                    }
                    else{
                        dp[j][i] = dp[j][i+1];
                    }
                }
            }
        }
        if(dp[0][0] == true || dp[1][0] == true){
            cout << "YES" << endl;
        }
        else{
            cout << "NO" << endl;
        }
    }
}