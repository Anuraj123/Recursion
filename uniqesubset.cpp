#include<bits/stdc++.h>
using namespace std;
void solve(string ip,string op, vector<string>&s)
{
	if(ip.length()==0)
	{
		int flag=0;
		for(int i=0;i<s.size();i++)
		{
			if(op==s[i])
			{
				flag=1;
				break;
			}
		}
		if(flag==0)
		{
			cout<<op<<" "; 
		}
		s.push_back(op);
		
		
		return;
	}
	string op1=op;
	string op2=op;
	op2.push_back(ip[0]);
	ip.erase(ip.begin()+0);
	solve(ip,op1,s);
solve(ip,op2,s);
}
int main()
{
	string ip="dad";
	string op=" ";
	vector<string>s;
	solve(ip,op,s);
}
