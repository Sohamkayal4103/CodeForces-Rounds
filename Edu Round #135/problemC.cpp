#include<bits/stdc++.h>
#define ll long long
using namespace std;

ll findLog(ll n){
    ll ct = 0;
    while(n > 0){
        n /= 10;
        ct++;
    }
    return ct;
}

int main(){
    ll t;
    cin >> t;
    while(t--){
        ll n;
        cin >> n;
        vector<ll>arr1(n);
        vector<ll>arr2(n);
        set<ll>st1,st2;
        for(ll i = 0;i < n;i++){
            cin >> arr1[i];
            st1.insert(arr1[i]);
        }
        for(ll i = 0;i < n;i++){
            cin >> arr2[i];
            st2.insert(arr2[i]);
        }
        vector<ll>arr;
        for(auto it : st1){
            if(st2.find(it) != st2.end()){
                st2.erase(it);
                arr.push_back(it);
                // st1.erase(it);
            }
        }
        for(auto it: arr){
            st1.erase(it);
        }
        // cout << endl;
        ll op = 0;
        arr.clear();
        for(auto it : st1){
            ll temp = findLog(it);
            if(st2.find(temp) != st2.end()){
                st2.erase(temp);
                arr.push_back(it);
                op++;
            }
        }
        for(auto it: arr){
            st1.erase(it);
        }
        arr.clear();
        for(auto it : st2){
            ll temp = findLog(it);
            if(st1.find(temp) != st1.end()){
                arr.push_back(it);
                st1.erase(temp);
                op++;
            }
        }
        for(auto it: arr){
            st2.erase(it);
        }
        for(auto it : st1){
            cout << it << " ";
        }
        cout << endl;
        for(auto it : st2){
            cout << it << " ";
        }
        cout << endl;


        arr.clear();
        set<ll>v1,v2;
        for(auto it : st1){
            v1.insert(findLog(it));
        }
        for(auto it : st2){
            v2.insert(findLog(it));
        }

        arr.clear();
        // for(auto it : v1){
        //     // ll temp = findLog(it);
        //     if(v2.find(it) != v2.end()){
        //         v2.erase(it);
        //         arr.push_back(it);
        //         op += 2;
        //     }
        // }
        // for(auto it: arr){
        //     v1.erase(it);
        // }


        for(auto it : v1){
            cout << it << " ";
        }
        cout << endl;
        for(auto it : v2){
            cout << it << " ";
        }
        cout << endl;


        // cout << endl;

    }
}