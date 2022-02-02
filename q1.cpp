#include<bits/stdc++.h>
using namespace std;
int main()
{
	int a[10],n,i;
	cin>>n;
	for(i=0;i<n;i++)
	{
		cin>>a[i];
	}
	reverse(a,a+n);
	for(i=0;i<n;i++)
	{
		cout<<a[i]<<endl;
	}
	
}
