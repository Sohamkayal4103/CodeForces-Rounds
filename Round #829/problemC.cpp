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
        vector<pair<ll,ll>>ans;
        ll ct1 = 0,ct2 = 0;
        // if(n % 2 == 1){
        //     cout << -1 << endl;
        //     continue;  
        // }
        for(ll i = 0;i < n;i++){
            if(arr[i] == 1){
                ct1++;
            }
            else{
                ct2++;
            }
        }
        if(ct1 > ct2){
            for(ll i = 0;i < n;i++){
                if(i < n-1 && arr[i] == 1 && arr[i+1] == 1 && ct1 > ct2){
                    ct1--;
                    ct2++;
                    ans.push_back(make_pair(i,i+1));
                    i++;
                }
                else if(i < n-1 && arr[i] == -1 && arr[i+1] == 1 && ct1 > ct2){
                    ct1--;
                    ct2++;
                    ans.push_back(make_pair(i,i+1));
                    i++;
                }
                else{
                    ans.push_back(make_pair(i,i));
                }
            }
            if(ct1 == ct2){
                cout << ans.size() << endl;
                for(auto it : ans){
                    cout << it.first+1 << " " << it.second+1 << endl;
                }
            }
            else{
                cout << -1 << endl;
            }
        }
        else if(ct1 < ct2){
            for(ll i = 0;i < n;i++){
                if(i < n-1 && arr[i] == -1 && arr[i+1] == -1 && ct1 < ct2){
                    ct1++;
                    ct2--;
                    ans.push_back(make_pair(i,i+1));
                    i++;
                }
                else if(i < n-1 && arr[i] == 1 && arr[i+1] == -1 && ct1 < ct2){
                    ct1++;
                    ct2--;
                    ans.push_back(make_pair(i,i+1));
                    i++;
                }
                else{
                    ans.push_back(make_pair(i,i));
                }
            }
            if(ct1 == ct2){
                cout << ans.size() << endl;
                for(auto it : ans){
                    cout << it.first+1 << " " << it.second+1 << endl;
                }
            }
            else{
                cout << -1 << endl;
            }
        }
        else{
            cout << n << endl;
            for(ll i = 1;i <= n;i++){
                cout << i << " " << i << endl;
            }
        }
    }
}