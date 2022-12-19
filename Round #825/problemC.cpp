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
        ll p1 = 0, p2 = -1,op = 0;
        for(ll i = 0;i < n;i++){
            if(arr[i] < i-p1){
                p2 = i-1;
                op += ((p2-p1+1)*(p2-p1+2))/2;
            }
            p1 = i;
        }
        cout << op << endl;
    }
}