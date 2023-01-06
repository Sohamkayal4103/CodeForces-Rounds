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
        set<ll>st1;
        set<ll>st2;
        vector<ll>ans1(n);
        vector<ll>ans2(n);
        int signal = 0;
        for(ll i = 0;i < n;i++){
            if(st1.find(arr[i]) == st1.end()){
                st1.insert(arr[i]);
                ans1[i] = arr[i];
            }
            else if(st2.find(arr[i]) == st2.end()){
                st2.insert(arr[i]);
                ans2[i] = arr[i];
            }
            else{
                signal = 1;
                break;
            }
        }
        set<ll>rema;
        set<ll>remb;
        
        for(ll i = 1;i <= n;i++){
            if(st1.find(i) == st1.end()){
                rema.insert(i);
            }
            if(st2.find(i) == st2.end()){
                remb.insert(i);
            }
        }
        
        for(int i = 0;i < n;i++){
            if(ans1[i] == 0){
                auto it = rema.upper_bound(ans2[i]);
                if(it == rema.begin()){
                    signal = 1;
                    break;
                }
                else{
                    it--;
                    ans1[i] = *it;
                    rema.erase(it);
                }
            }
            if(ans2[i] == 0){
                auto it = remb.upper_bound(ans1[i]);
                if(it == remb.begin()){
                    signal = 1;
                    break;
                }
                else{
                    it--;
                    ans2[i] = *it;
                    remb.erase(it);
                }
            }
        }

        if(signal == 1){
            cout << "NO" << endl;
        }
        else{
            cout << "YES" << endl;
            for(auto it : ans1){
                cout << it << " ";
            }
            cout << endl;
            for(auto it : ans2){
                cout << it << " ";
            }
            cout << endl;
        }
    }
}


  