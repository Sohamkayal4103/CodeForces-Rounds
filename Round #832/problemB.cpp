#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
    ll t;
    cin >> t;
    while(t--){
        ll n;
        cin >> n;
        ll end = 3 * n;
        ll i = 6;
        ll ct = 0;
        vector<pair<ll,ll>>arr;
        ll p1 = 1,p2 = 3*n;
        while(p1 < p2){
            arr.push_back(make_pair(p1,p2));
            p1 += 3;
            p2 -= 3;
        }
        cout << arr.size() << endl;
        for(ll i = 0;i < arr.size();i++){
            cout << arr[i].first << " " << arr[i].second << endl;
        }
    }
}