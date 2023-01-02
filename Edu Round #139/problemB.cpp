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
        set<string>st;
        if(n == 1 || n == 2){
            cout << "NO" << endl;
        }
        else{
            int signal = 0;
            st.insert(s.substr(0,1));
            st.insert(s.substr(1,1));
            st.insert(s.substr(0,2));
            for(ll i = 2;i < n-1;i++){
                string temp = s.substr(i,2);
                if(st.find(temp) != st.end()){
                    signal = 1;
                    break;
                }
                else{
                    st.insert(s.substr(i-1,2));
                    st.insert(s.substr(i,1));
                }
            }
            if(signal == 0){
                cout << "NO" << endl;
            }
            else{
                cout << "YES" << endl;
            }
        }

    }
}