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
        ll op = 0;
        ll val = arr[0] * 2 - 1;
        for(ll i = 1;i < n;i++){
            if(arr[i] <= val){
                continue;
            }
            else if(arr[i] > val && arr[i] <= val*2){
                op++;
            }
            else{
                op += (arr[i] / val);
                if(arr[i] % val == 0){
                    op--;
                }
            }

        }
        cout << op << endl;
    }
}