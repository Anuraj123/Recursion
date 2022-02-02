#include<bits/stdc++.h>
using namespace std;
void deletes(stack<int>s,int middle)
{
	if(middle==1)
	{
		s.pop();
		return;
	}
	int temp=s.top();
	s.pop();
	deletes(s,middle-1);
	s.push(temp);
}
int main()
{
	int n,a;
	cin>>n;
	stack<int>s;
	for(int i=0;i<n;i++)
	{
		cin>>a;
		s.push(a);
	}
	int middle=s.size()/2+1;
	deletes(s,middle);
	while(!s.empty())
	{
		cout<<s.top()<<" ";
		s.pop();
	}
}
