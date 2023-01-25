//author : Obito Uchiha
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
        vector<ll>arr(n);
        for(ll i = 0;i < n;i++){
            cin >> arr[i];
        }
        ll ct0 = 0,ct1 = 0;
        for(ll i = 0;i < n;i++){
            if(arr[i] % 2 == 0){
                ct0++;
            }
            else{
                ct1++;
            }
        }
        if(ct1 == 0){
            cout << "NO" << endl;
        }
        else if(ct1 >= 3){
            cout << "YES" << endl;
            ll ctf = 3;
            for(ll i = 0;i < n;i++){
                if(arr[i] % 2 == 1 && ctf > 0){
                    ctf--;
                    cout << i + 1 << " ";
                }
            }
            cout << endl;
        }
        else if(ct1 ==1){
            cout << "YES" << endl;
            ll ctf = 1;
            for(ll i = 0;i < n;i++){
                if(arr[i] % 2 == 1 && ctf > 0){
                    ctf--;
                    cout << i + 1 << " ";
                }
            }
            ctf = 2;
            for(ll i = 0;i < n;i++){
                if(arr[i] % 2 == 0 && ctf > 0){
                    ctf--;
                    cout << i + 1 << " ";
                }
            }
            cout << endl;
        }
        else if(ct1 == 2){
            if(ct0 == 1){
                cout << "NO" << endl;
            }
            else{
                 cout << "YES" << endl;
                ll ctf = 1;
                for(ll i = 0;i < n;i++){
                    if(arr[i] % 2 == 1 && ctf > 0){
                        ctf--;
                        cout << i + 1 << " ";
                    }
                }
                ctf = 2;
                for(ll i = 0;i < n;i++){
                    if(arr[i] % 2 == 0 && ctf > 0){
                        ctf--;
                        cout << i + 1 << " ";
                    }
                }
                cout << endl;
            }
        }
    }

}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    solve();
}