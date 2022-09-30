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
        ll n,k;
        cin >> n >> k;
        vector<ll>arr(k);
        for(ll i = 0;i < k;i++){
            cin >> arr[i];
        }
        vector<ll>ans(n);
        ll p1 = n-1,p2 = k-1;
        while(p2 > 0){
            ans[p1] = arr[p2]-arr[p2-1];
            p2--;
            p1--;
        }
        ans[p1] = arr[p2];
        if(p1 > 0){
            ll pos = p1;
            ll temp = ans[p1]/(p1+1);
            // cout << "temp is: " << temp << endl;
            ll sum = ans[p1];
            // cout << "sum " << sum << endl;
            while(p1 >= 0){
                ans[p1] = temp;
                sum -= temp;
                p1--;
            }
            // ans[p1] = sum;
            ll p1 = 0;
            
            if(sum < 0){
                while(sum < 0){
                ans[p1]--;
                sum++;
                p1++;
            }
            }
            else{
                while(sum > 0){
                ans[p1]++;
                sum--;
                p1++;
            }
            }
            sort(ans.begin(),ans.begin()+pos+1);
        }
        // for(auto it : ans){
        //     cout << it << " ";
        // }
        // cout << endl;
        int signal = 0;
        for(ll i = 0;i < n-1;i++){
            if(ans[i] > ans[i+1]){
                signal = 1;
                break;
            }
        }
        if(signal == 0){
            cout << "Yes" << endl; 
        }
        else{
            cout << "No" << endl;
        }

    }

}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    solve();
}