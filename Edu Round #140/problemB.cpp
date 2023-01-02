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
        priority_queue<ll,vector<ll>,greater<ll>>pq;
        for(ll i = 1;i < n;i++){
            pq.push(arr[i]);
            // if(arr[0] < arr[i]){
            //     ll temp = arr[0] + arr[i];
            //     arr[0] = temp/2;
            //     if(temp % 2 == 1){
            //         arr[0]++;
            //     }
            // }
        }
        while(!pq.empty()){
            if(arr[0] < pq.top()){
                ll temp = arr[0] + pq.top();
                arr[0] = temp/2;
                if(temp % 2 == 1){
                    arr[0]++;
                }
                pq.pop();
            }
            else{
                pq.pop();
            }
        }
        cout << arr[0] << endl;
    }
}