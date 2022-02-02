#include<bits/stdc++.h>
using namespace std;
int solve(int n,int k)
{
	int mid=pow(2,n-1)/2;
	if(k==1 && n==1)
	{
		return 0;
	}
	if(k<=mid)
	{
		return solve(n-1,k);
	}
	else
	{
		return !solve(n-1,k-mid);
	}
}
int main()
{
	int n,k;
	cin>>n>>k;
	int res=solve(n,k);
	cout<<res<<endl;
}
