#include<bits/stdc++.h>
using namespace std;
void insert(vector<int>&v,int temp)
{
	if(v.size()==0 || v[v.size()-1]<=temp)
	{
		v.push_back(temp);
		return;
	}
	int unit=v[v.size()-1];
	v.pop_back();
	insert(v,temp);
	v.push_back(unit);
}
void sort(vector<int>&v)
{
	if(v.size()==1)
	{
		return;
	}
	int temp=v[v.size()-1];
v.pop_back();
sort(v);

insert(v,temp);

}

int main()
{
	int n,a;
	vector<int>v;
	cin>>n;
	cout<<"enter the numbers of array"<<endl;
	for(int i=0;i<n;i++)
	{
		cin>>a;
		v.push_back(a);
	}
	
	sort(v);
		for(int i=0;i<n;i++)
	{
		cout<<v[i]<<" ";
	}
	return 0;
}
