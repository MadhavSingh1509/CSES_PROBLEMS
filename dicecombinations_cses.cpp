#include <bits/stdc++.h>
using namespace std;
const int mod=1e9+7;
	int f(int sum,int target,vector<int>&dp){
	if(sum>target)return 0;
	if(sum==target)return 1;
	if(dp[sum]!=-1)return dp[sum];
	int ways=0;
	for(int num=1;num<=6;num++)ways+=f(sum+num,target,dp);
	return dp[sum]=ways%mod;}
	int main()
	{
	    int n;
	    cin>>n;
	    vector<int>dp(n+1,-1);
	    cout<<f(0,n,dp)<<endl;
	}
	


