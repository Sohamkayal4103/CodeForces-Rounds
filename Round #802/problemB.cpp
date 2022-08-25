#include<bits/stdc++.h>

using namespace std;

#define fastio() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define mod 1000000007
#define nline "\n"
#define read(arr, n)            \
    for (int i = 0; i < n; i++) \
        cin >> arr[i];
#define write(arr, n)          \
    for (int i = 0; i < n; i++) \
        cout << arr[i] << " " ; \
    cout << "\n" ; 
#define loop(i, n) for (int i = 0; i < n; i++)

typedef long long ll;
typedef unsigned long long ull;
typedef long double lld;

#ifndef ONLINE_JUDGE
#define debug(x) cerr << #x <<" "; _print(x); cerr << nline;
#else
#define debug(x)
#endif

void _print(ll t) {cerr << t;}
void _print(int t) {cerr << t;}
void _print(string t) {cerr << t;}
void _print(char t) {cerr << t;}
void _print(lld t) {cerr << t;}
void _print(double t) {cerr << t;}
void _print(ull t) {cerr << t;}

template <class T, class V> void _print(pair <T, V> p);
template <class T> void _print(vector <T> v);
template <class T> void _print(set <T> v);
template <class T, class V> void _print(map <T, V> v);
template <class T> void _print(multiset <T> v);
template <class T, class V> void _print(pair <T, V> p) {cerr << "{"; _print(p.first); cerr << ","; _print(p.second); cerr << "}";}
template <class T> void _print(vector <T> v) {cerr << "[ "; for (T i : v) {_print(i); cerr << " ";} cerr << "]";}
template <class T> void _print(set <T> v) {cerr << "[ "; for (T i : v) {_print(i); cerr << " ";} cerr << "]";}
template <class T> void _print(multiset <T> v) {cerr << "[ "; for (T i : v) {_print(i); cerr << " ";} cerr << "]";}
template <class T, class V> void _print(map <T, V> v) {cerr << "[ "; for (auto i : v) {_print(i); cerr << " ";} cerr << "]";}

void init_code()
{
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    freopen("debug.txt", "w", stderr);
    #endif
}

signed main(int argc, char **argv){
    fastio();
    // init_code();
    ll t;
    cin >> t;
    while(t--){
      ll n,x,sum=0,e=0;
      cin >> n;
      char a[n];
      int b[n],c[n] = {0};
      for(int i = 0;i < n;i++){
        cin >> a[i];
        b[i] = (int)a[i]-48;
        if(i == 0 && b[i] == 9){\
          e = 1;
        }
      }
      if(e == 0){
        for(int i= 0;i < n;i++){
          cout << 9-b[i];
        }
        cout << endl;
      }
      else{
        c[n-2] = 1;
        c[0] = 11;
        c[n-1] = 1;
        for(int i = n-1;i>0;i--){
          if(c[i] >= b[i]){c[i] = c[i]-b[i];}
          else{
            c[i] = c[i]-b[i]+10;
            c[i-1]--;
          }
        }
        c[0] = c[0]-9;
        for(int i = 0;i < n;i++){
          cout << c[i];
        }
        cout << endl;
      }

    }
    return 0; 
}