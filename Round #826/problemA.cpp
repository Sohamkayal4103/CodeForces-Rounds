#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
    ll t;
    cin >> t;
    while(t--){
        string a,b;
        cin >> a >> b;
        char c1 = a[a.length()-1],c2 = b[b.length()-1];
        if(c1 == 'S'){
            if(c2 == 'M'){
                cout << "<" << endl;
            }
            else if(c2 == 'L'){
                cout << "<" << endl;
            }
            else{
                if(a.length() < b.length()){
                    cout << ">" << endl;
                }
                else if(a.length() > b.length()){
                    cout << "<" << endl;
                }
                else{
                    cout << "=" << endl;
                }
            }
        }
        else if(c1 == 'M'){
            if(c2 == 'S'){
                cout << ">" << endl;
            }
            else if(c2 == 'L'){
                cout << "<" << endl;
            }
            else{
                cout << "=" << endl;
            }
        }
        else if(c1 == 'L'){
            if(c2 == 'S'){
                cout << ">" << endl;
            }
            else if(c2 == 'M'){
                cout << ">" << endl;
            }
            else{
                if(a.length() < b.length()){
                    cout << "<" << endl;
                }
                else if(a.length() > b.length()){
                    cout << ">" << endl;
                }
                else{
                    cout << "=" << endl;
                }
            }
        }
    }
}