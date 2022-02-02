#include<bits/stdc++.h>
using namespace std;
void solve(int k,int index,int&ans,vector<int>v)
{
	if(v.size()==1)
	{
		ans=v[0];
		return;
	}
	index=(index+k)%v.size();
	v.erase(v.begin()+index);
	solve(k,index,ans,v);
	}
int main()
{
	int n,k;
	cin>>n>>k;
	k=k-1;  
	int index=0;
	int ans=-1;
	vector<int>v;
	for(int i=0;i<n;i++)
	{
		v.push_back(i+1);
	}
	solve(k,index,ans,v);
cout<<ans;
return 0;	
}
