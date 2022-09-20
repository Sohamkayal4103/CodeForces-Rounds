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

ll cntDigits(ll n){
    ll ct = 0;
    while(n > 0){
        n /= 10;
        ct++;
    }
    return ct;
}

void solve() {
    // Add your solution here
    ll t;
    cin >> t;
    while(t--){
        ll n;
        cin >> n;
        vector<ll>arr1(n);
        vector<ll>arr2(n);
        for(ll i = 0;i < n;i++){
            cin >> arr1[i];
        }
        for(ll i = 0;i < n;i++){
            cin >> arr2[i];
        }
        priority_queue<ll>q1,q2;
        for(ll i = 0;i < n;i++){
            q1.push(arr1[i]);
        }
        for(ll i = 0;i < n;i++){
            q2.push(arr2[i]);
        }
        while(!q1.empty() && !q2.empty()){
            ll val1 = q1.top();
            ll val2 = q2.top();
            if(val1 == val2){
                q1.empty();
                q2.empty();
            }
            else if(q1.empty() > q2.empty()){
                ll 
            }
        }

    }

}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    solve();
}