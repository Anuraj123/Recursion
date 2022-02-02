#include<bits/stdc++.h>
using namespace std;
void insert(stack<int>&s,int val)
{
if(s.size()==0)
{
	s.push(val);
	return;
}
int temp=s.top();
s.pop();
insert(s,val);
s.push(temp);
return;
}
void reverse(stack<int>&s)
{
	if(s.size()==1)
	{
		return;
	}
	int temp=s.top();
	s.pop();
	reverse(s);
	insert(s,temp);
	return;
}
int main()
{
	int a,n;
	cin>>n;
	stack<int>s;
	for(int i=0;i<n;i++)
	{
		cin>>a;
		s.push(a);
	}
	reverse(s);
	while(!s.empty())
	{
		cout<<s.top()<<" ";
		s.pop();
	}
}
