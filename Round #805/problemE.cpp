#include<bits/stdc++.h>
using namespace std;
#define int long long
#define rep(i,a,b) for(int i=a; i<b; ++i)
#define all(x) x.begin(),x.end()
#define mp make_pair
#define google "Case #" << tc << ": "
 
const long long INF=1e18;
const int32_t M=1e9+7;
const int32_t MM=998244353;
const int32_t N=1e5+1;
 
bool odd_cycle(int src,map<int,vector<int>>&adj,vector<int>&vis,vector<int>&col,int n)
{
    col[src] = 1;
    queue<int>q;
    q.push(src);
    while(!q.empty())
    {
        int u = q.front();
        q.pop();
        for(int v:adj[u])
        {
            if(vis[v])
            {
                if(col[v]==1-col[u])
                    continue;
                else
                    return true;
            }
            else 
            {
                vis[v] = 1;
                col[v] = 1-col[u];
                q.push(v);
            }
        }
    }
    return false;
}
 
 
void solve(int tc)
{
     int n; cin >> n;
     map<int,vector<int>> adj;
     vector<pair<int,int>> v(n);
     int ok = true;
     rep(i,0,n)
     {
         cin >> v[i].first >> v[i].second;
         adj[v[i].first].push_back(v[i].second);
         adj[v[i].second].push_back(v[i].first);
         if(adj[v[i].first].size()>2 || adj[v[i].second].size() >2 || v[i].first==v[i].second)
         {
             ok = false;
         }
     }
     if(!ok)
     {
         cout << "NO" << endl;
         return;
     }
     //cout << "HUH" << endl;
     vector<int> vis(n+1,0);
     vector<int> col(n,-1);
     for(int i=1; i<=n; i++)
     {
        if(vis[i] == 0)
        {
            if(odd_cycle(i,adj,vis,col,n)) {cout << "NO" << endl; return;}
        }
     }
     cout << "YES" << endl;
}
 
int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
 
    int t=1; cin>>t;
    for(int i=1; i<=t; i++)
    solve(i);
} 