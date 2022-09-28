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

bool solve() {
    ll n;
    cin >> n;
    vector<ll>arr(n);
    for(ll i = 0;i < n;i++){
        cin >> arr[i];
    }
    ll signal = 0;
    
    
    priority_queue<ll,vector<ll>,greater<ll>>q;
    for(ll i = 0;i < n;i++){
        if(arr[i] % 2 == 1){
            ll temp = arr[i] % 10;
            arr[i] += temp;
        }
        q.push(arr[i]);
    }
    for(ll i = 0;i < n;i++){
        if(arr[i] % 10 == 0){
            signal = 1;
        }
    }
    if(signal == 1){
        for(ll i = 1;i < n;i++){
            if(arr[i] != arr[0]){
                return false;
            }
        }
        return true;
    }
    while(!q.empty()){
        ll temp = q.top();
        q.pop();
        if(!q.empty()){
            ll diff = q.top() - temp;
            ll val1 = diff/20;
            temp += (val1 * 20);
            // cout << temp << endl;
            while(temp < q.top()){
                temp += (temp % 10);
                // cout << "temp is: " << temp << endl;
            }
            if(temp != q.top()){
                return false;
            }
        }
    }
    return true;
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    ll t;
    cin >> t;
    while(t--){
        if(solve()){
            cout << "Yes" << endl;
        }
        else{
            cout << "No" << endl;
        }
    }
}