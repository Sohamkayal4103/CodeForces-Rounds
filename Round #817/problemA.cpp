#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
    ll t;
    cin >> t;
    while(t--){
        ll n;
        cin >> n;
        string s;
        cin >> s;
        string s1 = "Timur";
        map<char,ll>mpp1,mpp2;
        if(n != 5){
            cout << "NO" << endl;
        }
        else{
            int signal = 0;
            sort(s.begin(),s.end());
            sort(s1.begin(),s1.end());
            for(int i = 0;i < 5;i++){
                if(s[i] != s1[i]){
                    signal = 1;
                }
            }
            if(signal == 1){
                cout << "NO" << endl;
            }
            else{
                cout << "YES" << endl;
            }
        }
    }
}