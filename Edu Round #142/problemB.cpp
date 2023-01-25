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
        ll a1,a2,a3,a4;
        cin >> a1 >> a2 >> a3 >> a4;
        ll ans = 0,m1 = 0,m2 = 0;
        m1 = a1;
        m2 = a1;
        ans = a1;
        while(a2 > 0 && a3 > 0){
            int s1 = 0;
            if(m1 > 0){
                ll temp = min(a3,m1);
                m1 -= temp;
                m2 += temp;
                a3 -= temp;
                ans += temp;
                s1 = 1;
            }
            if(m2 > 0){
                ll temp = min(m2,a2);
                m2 -= temp;
                m1 += temp;
                a2 -= temp;
                ans += temp;
                s1 = 1;
            }
            if(s1 == 0)break;
        }
        // cout << a1 << " " << a2 << " " << a3 << " " << a4 << endl;
        // cout << m1 << " " << m2 << endl;
        ll temp = 0;
        if(a2 > 0){
            ll mo2 = m2;
            ll temp1 = 0;
            if(m2 >= 0){
                temp1 = min(a2,m2+1);
                mo2 -= temp;
            }
            ll x = min(m1,mo2);
            temp1 += min(x+1,a4);
            cout << ans + temp1 << endl;

        }
        else if(a3 > 0){
            ll mo1 = m1;
            ll temp1 = 0;
            if(m1 >= 0){
                temp1 = min(a3,m1+1);
                mo1 -= temp1;
            }
            ll x = min(mo1,m2);
            temp1 += min(x+1,a4);
            cout << ans + temp1 << endl;
        }
        else{
            ll x = min(m1,m2);
            x++;
            temp = max(temp,min(x,a4));
            cout << ans + temp << endl;
        }
    }

}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    solve();
}