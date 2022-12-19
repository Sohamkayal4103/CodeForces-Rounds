#include<bits/stdc++.h>
#define ll long long 
using namespace std;
int main(){
    ll t;
    cin >> t;
    while(t--){
        ll n;
        cin >> n;
        if(n % 3 == 2){
            for(ll i = 1;i <= n;i++){
                cout << i << " ";
            }
            cout << endl;
        }
        else if(n % 3 == 1){
            cout << 2 << " " << 1 << " ";
            for(ll i = 3;i <= n;i++){
                cout << i << " ";
            }
            cout << endl;
        }
        else{
            for(ll i = 2;i <= n-4;i++){
                cout << i << " ";
            }
            cout << 1 << " " << n-2 << " " << n-3 << " " << n-1 << " " <<n << endl;  
        }
    }
}