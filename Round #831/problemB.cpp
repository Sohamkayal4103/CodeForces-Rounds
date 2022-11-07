#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
    ll t;
    cin >> t;
    while(t--){
        ll n;
        cin >> n;
        vector<pair<ll,ll>>arr(n);
        for(ll i = 0;i < n;i++){
            ll x,y;
            cin >> x >> y;
            if(x < y){
                arr.push_back(make_pair(y,x));
            }
            else{
                arr.push_back(make_pair(x,y));
            }
        }
        sort(arr.begin(),arr.end());
        ll ans = 0;
        ans += (arr[arr.size()-1].first*2);
        ll temp = 0;
        for(ll i = 0;i < arr.size();i++){
            temp += (arr[i].second*2);
        }
        ans += temp;
        cout << ans << endl;
    }
}