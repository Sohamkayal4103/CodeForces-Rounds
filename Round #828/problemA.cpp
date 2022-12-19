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
        string s;
        cin >> s;
        vector<ll>v1(51,-1);
        int signal = 0;
        for(ll i = 0;i < n;i++){
            if(v1[arr[i]] == -1){
                v1[arr[i]] = s[i]-'a';
            }
            else{
                if(v1[arr[i]] != s[i] - 'a'){
                    signal = 1;
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