#include<bits/stdc++.h>
using namespace std;
void solve(int zero,int one,int n,string op)
{
	if(n==0)
	{
		cout<<op<<" ";
		return;
	}
	string op1=op;
	op1.push_back('1');
	solve(zero,one+1,n-1,op1);
	if(one>zero)
		{
		string op2=op;
		op2.push_back('0');
		solve(zero+1,one,n-1,op2);
	}
	return;
}
int main()
{
	int n;
	cin>>n;
	int one=0;
	int zero=0;
	string op=" ";
	solve(zero,one,n,op);
	return 0;
}
