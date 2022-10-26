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


struct DSU {
    vector<int>parent,sizz;
 
    DSU () {}
 
    DSU(int n) {
        for(int i=0;i<=n;i++) parent.push_back(i);
        sizz.assign(n+1,1);
    }
    
    int find_set(int v) {
        if(parent[v] == v) return v;
        return parent[v] = find_set(parent[v]);
    }
 
    void union_set(int u,int v) {
        u = find_set(u);
        v = find_set(v);
 
        if(v == u) return;
 
        if(sizz[u] > sizz[v]) swap(u,v);
        parent[u] = v;
        sizz[v] += sizz[u];
    }
};


void solve() {
    ll t;
    cin >> t;
    while(t--){
        ll n;
        cin >> n;
        string s;
        cin >> s;
        set<ll>st;
        for(ll i = 0;i < 26;i++){
            st.insert(i);
        }
        DSU gr(26);
        map<ll,ll>mpp;
        for(ll i = 0;i < s.length();i++){
            ll n1 = s[i] - 'a';
            if(mpp.find(n1) != mpp.end()){
                continue;
            }
            else if(mpp.size() == 25){
                mpp[n1] = *st.begin();
            }
            else{
                for(auto it : st){
                    if(gr.find_set(n1) != gr.find_set(it)){
                        gr.union_set(n1,it);
                        mpp[n1] = it;
                        break;
                    }
                }
                st.erase(st.find(mpp[n1]));
            }
        }
        string ans = "";
        for(ll i = 0;i < s.length();i++){
            ans += mpp[s[i]-'a'] + 'a';
        }
        // for(auto u:s) cout<<(char('a'+mpp[u-'a']));cout<<endl;
        cout << ans << endl;
    }

}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    solve();
}
