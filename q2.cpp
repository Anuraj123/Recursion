#include<bits/stdc++.h>
using namespace std;
int main()
{
	int a[10],n;
	cin>>n;
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
cout<<*max_element(a,a+n)<<endl;	
cout<<*min_element(a,a+n)<<endl;
}
