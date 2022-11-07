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
        ll temp = *min_element(arr.begin(),arr.end());
        if(temp == arr[0]){
            cout << "Bob" << endl;
        }
        else{
            cout << "Alice" << endl;
        }
    }
}