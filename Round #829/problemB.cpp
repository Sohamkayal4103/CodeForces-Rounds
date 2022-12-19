#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
    ll t;
    cin >> t;
    while(t--){
        ll n;
        cin >> n;
        ll diff = n/2,start = n/2;
        if(n % 2 == 1){
            start++;
        }
        if(n % 2 == 1){
            cout << 1 << " ";
            while(start > 1){
                cout << start << " " << start + diff << " ";
                start--;
            }
            cout << endl;
        }
        else{
            while(start >= 1){
                cout << start << " " << start + diff << " ";
                start--;
            }
            cout << endl;
        }
    }
}