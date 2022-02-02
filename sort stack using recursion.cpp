#include<bits/stdc++.h>
using namespace std;
void insert(stack<int>&v,int temp)
{
	if(v.size()==0 || v.top()<=temp)
	{
		v.push(temp);
		return;
	}
	int unit=v.top();
	v.pop();
	insert(v,temp);
	v.push(unit);
	
}
void sort(stack<int>&v)
{
	if(v.size()==1)
	{
		return;
	}
	int temp=v.top();
v.pop();
sort(v);
insert(v,temp);
}
int main()
{
	int n,a;
	stack<int>v;
	cin>>n;
	cout<<"enter the numbers of array"<<endl;
	for(int i=0;i<n;i++)
	{
		cin>>a;
		v.push(a);
	}
	cout<<"hello"<<endl;
	sort(v);
	reverse(v.begin(),v.end());
		while(!v.empty())
	{
		cout<<v.top()<<" ";
		v.pop();
	}
	return 0;
}
