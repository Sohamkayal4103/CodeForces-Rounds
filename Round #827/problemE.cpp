#include<bits/stdc++.h>
#define ll long long 
using namespace std;
int main(){
    ll t;
    cin >> t;
    while(t--){
        ll n,q;
        cin >> n >> q;
        vector<ll>arr(n);
        for(ll i= 0;i < n;i++){
            cin >> arr[i];
        }
        vector<ll>v1(q);
        for(ll i = 0;i < q;i++){
            cin >> v1[i];
        }
        set<ll>st;
        map<ll,vector<ll>>mpp;
        for(ll i= 0;i < q;i++){
            mpp[v1[i]].push_back(i);
        }
        // for(ll i = 0;i < mpp.size();i++){
        //     cout << i << ": "; 
        //     for(ll j = 0;j < mpp[i].size();j++){
        //         cout << mpp[i][j] << " ";
        //     }
        //     cout << endl;
        // }
        
        for(ll i = 0;i < q;i++){
            st.insert(v1[i]);
        }
        vector<ll>prefSum(n);
        ll sum = 0;
        for(ll i = 0;i < n;i++){
            sum += arr[i];
            prefSum[i] = sum;
        }
        priority_queue<ll,vector<ll>,greater<ll>>pq;
        for(auto it : st){
            pq.push(it);
        }
        vector<ll>ans(q);
        ll i = 0,signal = 0;
        while(!pq.empty() && i < n){
            ll temp = pq.top();
            while(temp >= arr[i] && i < n){
                i++;
            }
            if(i == n){
                // cout << "This happened" << endl;
                signal = 1;
                break;
            }
            else{
                for(ll j = 0;j < mpp[temp].size();j++){
                    ans[mpp[temp][j]] = i-1;
                }
                pq.pop();
            }
        }
        if(signal == 1){
            // cout << "Followed this: " << endl;
            while(!pq.empty()){
                ll temp = pq.top();
                for(ll j = 0;j < mpp[temp].size();j++){
                    // cout << "change: " << mpp[temp][j] << endl;
                    ans[mpp[temp][j]] = n-1;
                }
                pq.pop();
            }
        }
        // for(auto it : prefSum){
        //     cout << it << " ";
        // }
        // cout << endl;
        for(ll j = 0;j < ans.size();j++){
            if(ans[j] == -1){
                cout << 0+v1[j] << " ";
            }
            else{
                cout << prefSum[ans[j]] << " ";
            }
        }
        cout << endl;
    }
}