#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
    ll t;
    cin >> t;
    while(t--){
        ll n;
        char c;
        cin >> n >> c;
        string s;
        cin >> s;
        int signal = 0, p1 = -1;
        ll ctf = 0;
        for(ll i = 0;i < s.length();i++){
            if(signal == 1){
                break;
            }
            if(s[i] == c){
                p1 = i;
                ll ct = 0;
                while(s[p1] != 'g'){
                    if(p1 == n-1){
                        p1 = 0;
                        ct++;
                        signal = 1;
                    }
                    else{
                        p1++;
                        ct++;
                    }
                }
                ctf = max(ctf,ct);
                i = p1;
            }
        }
        cout << ctf << endl;
    }
}