#include<iostream>
#include<vector>
using namespace std;

// this is the DP question. Don't know the DP approach.

int shortestCommonSupersequence(string x, string y, int m, int n)
{
    //code here
    vector<vector<int>>dp(m+1,vector<int>(n+1,0));
    for(int i=1;i<=m;i++)
    {
        for(int j=1;j<=n;j++)
        {
            if(x[i-1]==y[j-1])
            {
                dp[i][j]= 1+ dp[i-1][j-1];
            }
            else
            {
                dp[i][j]= max(dp[i-1][j],dp[i][j-1]);
            }
        }
    }
    
    return (dp[m][n] + (m-dp[m][n]) + (n-dp[m][n]));
}

int main()
{
    string s1 = "abcd";
    string s2 = "xycd";

    int ans = shortestCommonSupersequence(s1,s2,s1.size(),s2.size());
    cout<<"ans -> "<<ans<<endl;
    
    return 0;
}