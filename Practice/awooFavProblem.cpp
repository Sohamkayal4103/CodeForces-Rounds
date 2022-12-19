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
    // Add your solution here
    ll n;
    cin >> n;
    string s1,s2;
    cin >> s1 >> s2;
    string temp1 = "",temp2 = "";
    for(ll i = 0;i < s1.length();i++){
        if(s1[i] != 'b'){
            temp1 += s1[i];
        }
    }
    for(ll i = 0;i < s2.length();i++){
        if(s2[i] != 'b'){
            temp2 += s2[i];
        }
    }
    if(temp1 != temp2){
        return false;
    }
    vector<ll>arr1,arr2;
    for(ll i = 0;i < s1.length();i++){
        if(s1[i] == 'a'){
            arr1.push_back(i);
        }
    }
    for(ll i = 0;i < s2.length();i++){
        if(s2[i] == 'a'){
            arr2.push_back(i);
        }
    }
    for(ll i = 0;i < arr2.size();i++){
        if(arr2[i] < arr1[i]){
            return false;
        }
    }
    vector<ll>v1,v2;
    for(ll i = 0;i < s1.length();i++){
        if(s1[i] == 'c'){
            v1.push_back(i);
        }
    }
    for(ll i = 0;i < s2.length();i++){
        if(s2[i] == 'c'){
            v2.push_back(i);
        }
    }
    for(ll i = 0;i < v2.size();i++){
        if(v2[i] > v1[i]){
            return false;
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
            cout << "YES" << endl;
        }
        else{
            cout << "NO" << endl;
        }
    }
}