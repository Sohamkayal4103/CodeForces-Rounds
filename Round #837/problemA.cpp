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
        ll n1 = *min_element(arr.begin(),arr.end());
        ll n2 = *max_element(arr.begin(),arr.end());
        if(n1 != n2){
            ll ct1 = 0,ct2 = 0;
            for(ll i = 0;i < arr.size();i++){
                if(arr[i] == n1){
                    ct1++;
                }
                if(arr[i] == n2){
                    ct2++;
                }
            }
            ll ans = ct1* ct2;
            ans *= 2;
            cout << ans << endl;
        }
        else{
            ll ans = n * (n-1);
            cout << ans << endl;
        }
        
    }
}