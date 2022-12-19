#include <bits/stdc++.h>

using namespace std;



template<typename A, typename B> ostream& operator<<(ostream &os, const pair<A, B> &p) { return os << '(' << p.first << ", " << p.second << ')'; }
template<typename T_container, typename T = typename enable_if<!is_same<T_container, string>::value, typename T_container::value_type>::type> ostream& operator<<(ostream &os, const T_container &v) { os << '{'; string sep; for (const T &x : v) os << sep << x, sep = ", "; return os << '}'; }
void dbg_out() { cerr << endl; }
template<typename Head, typename... Tail> void dbg_out(Head H, Tail... T) { cerr << ' ' << H; dbg_out(T...); }
#ifdef LOCAL
#define dbg(...) cerr << "(" << #__VA_ARGS__ << "):", dbg_out(__VA_ARGS__)
#else
#define dbg(...)
#endif

#define ar array
#define ll long long
#define ld long double
#define sza(x) ((int)x.size())
#define all(a) (a).begin(), (a).end()

#define PI 3.1415926535897932384626433832795l 
const int MAX_N = 1e5 + 5;
const ll MOD = 1e9 + 7;
const ll INF = 1e9;
const ld EPS = 1e-9;

// -------------------------<RNG>------------------------- 
// RANDOM NUMBER GENERATOR
mt19937 RNG(chrono::steady_clock::now().time_since_epoch().count());  
#define SHUF(v) shuffle(all(v), RNG); 
// Use mt19937_64 for 64 bit random numbers.

void solve() {
    ll t;
    cin >> t;
    while(t--){
        ll n;
        cin >> n;
        string s;
        cin >> s;
        ll ans = 0,op = 0,max1 = 0;
        stack<ll>st;
        vector<vector<ll>>adj(2*n);
        for(ll i = 0;i < 2*n;i++){
            if(s[i] == '('){
                st.push(i);
            }
            else if(s[i] == ')'){
                ll b = st.top();
                ll a = i;
                adj[a].push_back(b);
                adj[b].push_back(a);
            }
        }
        vector<ll>vis(2*n,0);
        ll ct = 0;
        for(ll i = 0;i < 2*n;i++){
            if(vis[i] == 0){
                ct++;
            }
            else{
                queue<ll>q;
                q.push(i);
                while(!q.empty()){
                    ll temp = q.front();
                    vis[temp] = 1;
                    q.pop();
                    for(ll j = 0;j < adj[temp].size();j++){
                        if(vis[adj[temp][j]] != 1){
                            q.push(adj[temp][j]);
                        }
                    }
                }
            }
        }
        stack<char>st2;
        for(ll i = 0;i < 2*n;i++){
            if(s[i] == '('){
                st.push('(');
            }
            else{
                st.pop();
            }
        }
        
    }
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    solve();
}