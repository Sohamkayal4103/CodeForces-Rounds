#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
    // #ifndef ONLINE_JUDGE
    //     freopen("input.txt", "r", stdin);
    //     freopen("output.txt", "w", stdout);
    // #endif
    ll t;
    cin >> t;
    while(t--){
        string s;
        cin >> s;
        // cout << s << endl;
        vector<ll>arr(26,0);
        vector<vector<ll>>adj(26);
        for(ll i = 0;i < s.length();i++){
            arr[s[i]-'a']++;
            adj[s[i]-'a'].push_back(i);
        }
        ll start = s[0]-'a';
        ll des = s[s.length()-1]-'a';
        // cout << start << " " << endl;
        ll tiles = 0;
        vector<ll>path;
        if(start <= des){
            for(ll i = start;i <= des;i++){
                tiles += arr[i];
                for(ll j = 0;j < adj[i].size();j++){
                    path.push_back(adj[i][j]+1);
                }
            }
            ll cost = des-start;
            cout << cost << " " << tiles << endl;
            for(auto it : path){
                cout << it << " ";
            }
            cout << endl;
        }
        else{
            for(ll i = start;i >= des;i--){
                tiles += arr[i];
                for(ll j = 0;j < adj[i].size();j++){
                    path.push_back(adj[i][j]+1);
                }
            }
            ll cost = start-des;
            cout << cost << " " << tiles << endl;
            for(auto it : path){
                cout << it << " ";
            }
            cout << endl;
        }
    }
}