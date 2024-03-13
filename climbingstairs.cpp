#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int climb(int n,vector<int>& dp){  //Tabulation
    if(n == 0 || n == 1){
        return dp[n];
    }
    for(int i = 2; i <= n;i++){
        dp[i] = dp[i - 1] + dp[i - 2];
    }
    return dp[n];
}
int main(){
    int n;
    cin>>n;
    vector<int> dp(n + 1, -1);
    dp[0] = 1;
    dp[1] = 1;
    cout<<climb(n, dp)<<endl;
    return 0;
}