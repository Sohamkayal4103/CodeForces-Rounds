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
        ll ct1 = 0,ct2 = 0;
        stack<char>st;
        for(int i = 0;i < n;i++){
            if(s[i] == 'Q'){
                st.push('Q');
            }
            else{
                if(!st.empty()){
                    st.pop();
                }
            }
        }
        if(!st.empty()){
            cout << "No" << endl;
        }
        else{
            cout << "Yes" << endl;
        }
    }
}