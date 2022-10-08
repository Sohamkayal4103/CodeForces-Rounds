#include<bits/stdc++.h>
#define ll long long
using namespace std;

long long floorsqrt(long long x)
{
    long long l = 1L, r = 1000000001L;
    while (l + 1L < r)
    {
        long long mid = l + (r - l) / 2;
        if (mid * mid == x)
            return mid;
        if (mid * mid < x)
            l = mid;
        else
            r = mid;
    }
    return l;
}

int main(){
    ll t;
    cin >> t;
    while(t--){
        ll l,r;
        cin >> l >> r;
        ll temp1 = floorsqrt(l);
        ll temp2 = floorsqrt(r);
        ll ans = max(0ll,temp2-temp1-1)*3;
        if(temp1 * temp1 >= l && temp1 * temp1 <= r){
            ans++;
        }
        if((temp1+1) * temp1 >= l && (temp1+1) * temp1 <= r){
            ans++;
        }
        if((temp1+2) * temp1 >= l && (temp1+2) * temp1 <= r){
            ans++;
        }
        if(temp1 != temp2){
            if(temp2 * temp2 >= l && temp2 * temp2 <= r){
                ans++;
            }
            if((temp2+1) * temp2 >= l && (temp2+1) * temp2 <= r){
                ans++;
            }
            if((temp2+2) * temp2 >= l && (temp2+2) * temp2 <= r){
                ans++;
            }
        }
        cout << ans << endl;
    }
}