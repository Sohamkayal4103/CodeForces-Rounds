#include<bits/stdc++.h>
#define ll long long 
using namespace std;
int main(){
    ll t;
    cin >> t;
    while(t--){
        ll n;
        cin >> n;
        if(n == 3){
            cout << -1 << endl;
        }
        else{
            if(n % 2 == 0){
                ll i = n;
                while(i > 0){
                    cout << i << " ";
                    i--;
                }
                cout << endl;
            }
            else{
                ll i = n-1;
                while(i > 3){
                    cout << i << " " << i+1 << " ";
                    i -= 2;
                }
                cout << "1 2 3" << endl;
            }
        }
    }
}