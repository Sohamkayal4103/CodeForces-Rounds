#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
    ll t;
    cin >> t;
    while(t--){
        ll n,m;
        cin >> n >> m;
        ll mid1,mid2;
        if(n % 2 == 1){
            mid1 = n/2 + 1;
        }
        else{
            mid1 = n/2;
        }
        if(m % 2 == 1){
            mid2 = m/2 + 1;
        }
        else{
            mid2 = m/2;
        }
        // cout << " mid: " << mid1 << " " << mid2 << endl;
        vector<pair<ll,ll>>arr;
        arr.push_back(make_pair(mid1-1,mid2-2));
        arr.push_back(make_pair(mid1-2,mid2-1));
        arr.push_back(make_pair(mid1-1,mid2+2));
        arr.push_back(make_pair(mid1-2,mid2+1));
        arr.push_back(make_pair(mid1+2,mid2-1));
        arr.push_back(make_pair(mid1+1,mid2-2));
        arr.push_back(make_pair(mid1+1,mid2+2));
        arr.push_back(make_pair(mid1+2,mid2+1));

        ll signal = 0;
        for(auto it : arr){
            if(it.first <= n &&  it.first > 0 && it.second <= m && it.second > 0){
                signal = 1;
            }
        }
        if(signal == 0){
            cout << mid1 << " " << mid2 << endl;
        }
        else{
            cout << n << " " << m << endl;
        }

    }
}