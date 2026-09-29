#include <bits/stdc++.h>
using namespace std;
class Solution{
    int fun(int n, vector<int> &dp)
    {
        // base case
        if(n <= 2) return n;

        // if dp already calc
        if(dp[n] != -1) return dp[n];

        // store + rec call
        dp[n] = fun(n-1, dp) + fun(n-2, dp);
    }
    public:
        int climbStairs(int n){
            vector<int> dp(n+1, -1);
            return fun(n, dp);
        }
};