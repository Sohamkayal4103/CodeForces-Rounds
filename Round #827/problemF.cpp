#include<bits/stdc++.h>
#define ll long long
using namespace std;

int solve(int desired_result,int n,vector<int>&powers){
    sort(powers.begin(),powers.end());
    int p1 = 0,p2 = n-1;
    int diff = powers[p2]-powers[p1];
    if(diff <= desired_result){
        return powers[p1] + powers[p2];
    }
    int diff1 = INT_MAX;
    int ans;
    while(p1 < p2){
        int temp = powers[p2]-powers[p1];
        if(abs(temp-desired_result) < diff1){
            diff1 = abs(temp-desired_result);
            ans = powers[p1] + powers[p2];
        }
        else if(abs(temp-desired_result) == diff1){
            ans = max(ans,powers[p1] + powers[p2]);
        }
        p1++;
    }
    p1 = 0,p2 = n-1;
    while(p1 < p2){
        int temp = powers[p2]-powers[p1];
        if(abs(temp-desired_result) < diff1){
            diff1 = abs(temp-desired_result);
            ans = powers[p1] + powers[p2];
        }
        else if(abs(temp-desired_result) == diff1){
            ans = max(ans,powers[p1] + powers[p2]);
        }
        p2--;
    }
    return ans;
}

int main(){
    int desired_result;
    cin >> desired_result;
    int n;
    cin >> n;
    vector<int>powers(n);
    for(int i = 0;i < n;i++){
        cin >> powers[i];
    }
    int ans = solve(desired_result,n,powers);
    cout << ans << endl;

}