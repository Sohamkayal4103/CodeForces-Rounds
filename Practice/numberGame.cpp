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
        // int signal = 0;
        // ll k = 1;
        // priority_queue<ll>pq;
        // for(ll i = 0;i < n;i++){
        //     pq.push(i);
        // }
        // ll sf = 0;
        // while(signal == 0){
        //     priority_queue<ll>pq;
        //     for(ll i = 0;i < n;i++){
        //         pq.push(i);
        //     }
        //     for(ll i = 1;i <= k;i++){
        //         ll b = k - i + 1;
        //         while(!pq.empty() && pq.top() > b){
        //             pq.pop();
        //         }
        //         if(pq.empty()){
        //             signal = 1;
        //             break;
        //         }
        //         pq.pop();
        //         if(!pq.empty()){
        //             ll temp = pq.top();
        //             pq.pop();
        //             temp += b;
        //             pq.push(temp);
        //         }
        //     }
        //     if(signal == 0){
        //         k++;
        //     }
        // }
        // cout << k-1 << endl;
        sort(arr.begin(),arr.end());
        int signal = 0;
        ll k = 1;
        while(signal == 0){
            ll p1 = n-1,p2 = 0,rounds = 0;
            for(ll i = 1;i <= k;i++){
                ll temp = k-i+1;
                while(arr[p1] > temp){
                    p1--;
                }
                if(p1 >= p2){
                    rounds++;
                    p1--;
                    p2++;
                }
                else{
                    break;
                }
            }
            if(rounds >= k){
                k++;
            }
            else{
                break;
            }
        }
        cout << k-1 << endl;

    }
}