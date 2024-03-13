#include <iostream>
#include <bits/stdc++.h>
#include <vector>
using namespace std;
int fib(int n) // recursion
{
    if (n == 0 || n == 1)
    {
        return n;
    }
    return fib(n - 1) + fib(n - 2);
}

// memoization

int fibo(int n, vector<int> &dp)
{
    if (n == 0 || n == 1)
    {
        return dp[n];
    }
    if (dp[n] != -1)
    {
        return dp[n];
    }

    return fibo(n - 1, dp) + fibo(n - 2, dp);
}

// Tabulation

int fibo2(int n, vector<int> &dp){
    for(int i = 2; i < n + 1; i++){
        dp[i] = dp[i - 1] + dp[i - 2];
    }

    return dp[n];

}

// Space optimization 

int fibo3(int n){
    int prev  = 0;
    int curr  = 1;
    int temp = curr;
    for(int i = 2; i <= n ;i++){
        temp = curr;
        curr += prev;
        prev = temp;
    }
    return curr;
}



int main()
{
    int n;
    cin >> n;
    vector<int> dp(n + 1, -1);
    dp[0] = 0;
    dp[1] = 1;
    cout << fibo2(n, dp);
    return 0;
}   