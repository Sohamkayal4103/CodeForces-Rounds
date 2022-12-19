#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
    ll t;
    cin >> t;
    while(t--){
        ll a,b,c;
        cin >> a >> b >> c;
        ll t1 = abs(a-1);
        ll t2 = abs(b-c) + abs(c-1);
        if(t1 == t2){
            cout << 3 << endl;
        }
        else if(t1 < t2){
            cout << 1 << endl;
        }
        else{
            cout << 2 << endl;
        }
        string s = "123";
        l num = stoi(s);l
        cout << num << endl;
    }
}