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
    // Add your solution here
    ll t;
    cin >> t;
    while(t--){
        
        ll n,q;
        cin >> n >> q;
        vector<ll>arr(n+1);
        for(ll i= 1;i <= n;i++){
            cin >> arr[i];
        }
        map<ll,pair<ll,ll>>mpp;
        for(ll i = 1;i <= n;i++){
            mpp[i] = make_pair(i-1,0);
        }
        mpp[1].first = 1;
        ll p1 = 1,p2 = 2;
        ll rnd = 1;
        while(p2 <= n){
            if(arr[p1] > arr[p2]){
                if(mpp[p1].first == 0){
                    mpp[p1].first = rnd;
                }
                mpp[p2].second = rnd;
                p2++;
                rnd++;
            }
            else{
                mpp[p1].second = rnd;
                p1 = p2;
                if(mpp[p1].first == 0){
                    mpp[p1].first = rnd;
                }
                p2++;
                rnd++;
            }
        }
        ll pl = 1;
        ll temp = 1;
        for(auto it : mpp){
            // cout << it.second.second << endl;
            if(it.second.second == 0){
                // cout << "found it for " << it.first << endl;
                mpp[temp].second = INT_MAX;
            }
            temp++;
        }
        // for(auto it : mpp){
        //    cout << it.first << " " << it.second << endl;
        // }
        for(ll i = 0;i < q;i++){
            ll player,round;
            cin >> player >> round;
            if(round < mpp[player].first){
                cout << 0 << endl;
            }
            else if(round >= mpp[player].second){
                ll wins = mpp[player].second-mpp[player].first;
                // cout << mpp[player].second << " " << mpp[player].first << endl;
                cout << wins << endl;
            }
            else{
                ll wins = round - mpp[player].first + 1;
                // cout << round << " " << mpp[player].first << endl;
                cout << wins << endl;
            }
        }

    }

}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    solve();
}