#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define F first
#define S second
#define pb push_back
#define vll vector<ll>
#define ml map<ll,ll>
#define mv map<ll,vll>
#define IT iterator
#define bg begin
#define en end
const ll mod = 1e9+7;
typedef pair<ll,ll> pii;
#define vpi vector<pii>
#define FOR(i,n) for (int i=0;i<n;i++)
#define FORR(i,m,n) for (int i=m;i<n;i++)
#define FORU(i,n) for (int i=n-1;i>=0;i--)
#define FORRU(i,m,n) for (int i=n-1;i>=m;i--)
vll inp(vll v);
void outp(vll v);
void fun ()
{
	ll n,m;
	cin>>n;
	string s,d;
    cin>>s;
    FORU(i,s.size())
    {
        if(s[i]!='0')
        {
            d.push_back(char(97+s[i]-'0'-1));
        }
        else
        {
            i--;
            int x=(s[i-1]-'0')*10+(s[i]-'0');
            d.push_back(char(97+x-1));
            i--;
        }
    }
    reverse(d.begin(),d.end());
    cout<<d<<endl;
    // cout<<char(98)<<' ';
}
int main()
{
	ios_base::sync_with_stdio(0);cin.tie(0);
	int t=1;
	cin>>t;
	while(t--)
	{
		fun();
	}
}
vll inp(vll v)
{
	FOR(i,v.size())
	{
		cin>>v[i];
	}
	return v;
}
void outp(vll v)
{
	FOR(i,v.size())
	{
		cout<<v[i]<<' ';
	}
	cout<<'\n';
}
