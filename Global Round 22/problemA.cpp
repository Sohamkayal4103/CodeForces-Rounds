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
        ll n;
        cin >> n;
        vector<ll>v1(n);
        vector<ll>skills(n);
        for(ll i = 0;i < n;i++){
            cin >> v1[i];
        }
        for(ll i = 0;i < n;i++){
            cin >> skills[i];
        }
        vector<ll>arr1;
        vector<ll>arr2;
        for(ll i = 0;i < n;i++){
            if(v1[i] == 0){
                arr1.push_back(skills[i]);
            }
            else{
                arr2.push_back(skills[i]);
            }
        }
        // for(auto it :arr1){
        //     cout << it << " ";
        // }
        // cout << endl;
        // for(auto it :arr2){
        //     cout << it << " ";
        // }
        // cout << endl;
        sort(arr1.begin(),arr1.end());
        sort(arr2.begin(),arr2.end());
        if(arr1.size() < arr2.size()){
            ll sum = 0;
            for(ll i = 0;i < arr1.size();i++){
                sum += (arr1[i] * 2);
            }
            ll temp = 0,p1 = arr2.size()-1;
            while(temp < arr1.size()){
                sum += (arr2[p1] * 2);
                p1--;
                temp++;
            }
            while(p1 >= 0){
                sum += (arr2[p1]);
                p1--;
            }
            cout << sum << endl;
        }
        else if(arr1.size() > arr2.size()){
            ll sum = 0;
            for(ll i = 0;i < arr2.size();i++){
                sum += (arr2[i] * 2);
            }
            ll temp = 0,p1 = arr1.size()-1;
            while(temp < arr2.size()){
                sum += (arr1[p1] * 2);
                p1--;
                temp++;
            }   
            while(p1 >= 0){
                sum += (arr1[p1]);
                p1--;
            }
            cout << sum << endl;
        }
        else{
            ll sum = 0,sum1 = 0,sum2 = 0;
            for(ll i = 0;i < arr1.size();i++){
                sum1 += (arr1[i] * 2);
            }
            for(ll i = 1;i < arr2.size();i++){
                sum1 += (arr2[i] * 2);
            }
            sum1 += arr2[0];
            for(ll i = 1;i < arr1.size();i++){
                sum2 += (arr1[i] * 2);
            }
            for(ll i = 0;i < arr2.size();i++){
                sum2 += (arr2[i] * 2);
            }
            sum2 += arr1[0];
            sum = max(sum1,sum2);
            cout << sum << endl;
        }
    }

}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    solve();
}