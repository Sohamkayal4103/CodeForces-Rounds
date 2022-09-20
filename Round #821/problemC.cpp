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
        vector<vector<ll>>ans;
        for(ll i = 0;i < n;i++){
            cin >> arr[i];
        }
        if(arr[0] % 2 == 1){
            ll temp = -1;
            for(ll i = 0;i < n;i++){
                if(arr[i] % 2 == 1){
                    temp = i;
                }
            }
            
            for(ll i = 0;i < n;i++){
                if(arr[i] % 2 == 1){
                    if(arr[i] != arr[temp]){
                        vector<ll>arr1;
                        arr1.push_back(i+1);
                        arr1.push_back(temp+1);   
                        ans.push_back(arr1); 
                    }
                }
            }
            for(ll i = 0;i < n;i++){
                if(arr[i] % 2 == 0){
                    vector<ll>arr1;
                    arr1.push_back(1);
                    arr1.push_back(i+1);
                    ans.push_back(arr1);
                }
            }
        }
        else{
            ll temp = -1;
            for(ll i = 0;i < n;i++){
                if(arr[i] % 2 == 0){
                    temp = i;
                }
            }
            
            for(ll i = 0;i < n;i++){
                if(arr[i] % 2 == 0){
                    if(arr[i] != arr[temp]){
                        vector<ll>arr1;
                        arr1.push_back(i+1);
                        arr1.push_back(temp+1);   
                        ans.push_back(arr1); 
                    }
                }
            }
            for(ll i = 0;i < n;i++){
                if(arr[i] % 2 == 1){
                    vector<ll>arr1;
                    arr1.push_back(1);
                    arr1.push_back(i+1);
                    ans.push_back(arr1);
                }
            }
        }  
        cout << ans.size() << endl;
        for(ll i = 0;i < ans.size();i++){
            for(ll j =0;j < ans[i].size();j++){
                cout << ans[i][j] << " ";
            }
            cout << endl;
        }      

    }
}