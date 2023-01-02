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
    ll n;
    cin >> n;
    vector<vector<ll>>arr;
    for(ll i = 0;i < n;i++){
        ll x;
        cin >> x;
        vector<ll>temp;
        for(ll j = 0;j < x;j++){
            ll k;
            cin >> k;
            temp.push_back(k);
        }
        arr.push_back(temp);
    }
    ll splits = 0;
    vector<ll>arr2;
    for(ll i = 0;i < n;i++){
        for(ll j = 0;j < arr[i].size();j++){
            arr2.push_back(arr[i][j]);
        }
    }
    sort(arr2.begin(),arr2.end());
    map<ll,ll>mpp;
    for(ll i = 0;i < arr2.size();i++){
        mpp[arr2[i]] = i;
    }
    for(ll i = 0;i < n;i++){
        for(ll j = 0;j < arr[i].size()-1;j++){
            if(mpp[arr[i][j+1]] - mpp[arr[i][j]] != 1){
                splits++;
            }
        }
    }
    ll comb = n + splits - 1;
    cout << splits << " " << comb << endl;
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    solve();
}