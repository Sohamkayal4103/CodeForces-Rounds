#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    ll t, a, b, x;
    
    cin>>t;
    
    for(;t--;)
    {
        cin>>x;
        
        if((x%2)==1){
            cout<<"-1\n";
            continue;
        }
        
        a=x+x/2;
        b=x/2;
        
        if((a^b)==x){
            cout<<a<<" "<<b<<"\n";
        }else{
            cout<<"-1\n";
        }
    }
}