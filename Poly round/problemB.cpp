#include<bits/stdc++.h>
#define ll long long 
using namespace std;
int main(){
    ll t;
    cin >> t;
    while(t--){
        ll n,m,k;
        cin >> n >> m >> k;
        vector<ll>arr(m);
        for(ll i = 0;i < m;i++){
            cin >> arr[i];
        }
        sort(arr.begin(),arr.end());
        ll temp = n/k;
        ll rem = n % k;
        ll temp1 = n/k;
        if(n % k != 0){
            temp1++;
        }
        int signal = 0;
        ll ct = 0;
        // cout << "No of patches: " << temp << endl; 
        for(ll i = 0;i < m;i++){
            if(arr[i] == temp1){
                if(ct < temp1){
                    ct++;
                }
                else{
                    signal = 1;
                    break;
                }
            }
            else if(arr[i] > temp){
                signal = 1;
                break;
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