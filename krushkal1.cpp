#include<bits/stdc++.h>
using namespace std;
class edge
{
	public:
		int weight,source,destination;
};
int compare(edge e1,edge e2)
{
	return e1.weight<e2.weight;
}
int findparent(int v,int* p)
{
	if(p[v]==v)
	return v;
	
	return findparent(p[v],p);
}
void unions(int u,int v,int* par)
{
	par[u]=par[v];
}
void print(edge* output,int v)
{
	for(int i=0;i<v-1;i++)
	{
		cout<<output[i].source<<" "<<output[i].destination<<" "<<output[i].weight<<endl;
	}
}
void krushkal(edge* arr,int v,int e)
{
	sort(arr,arr+e,compare);
	edge* output=new edge[v-1];
	int* par=new int[v];
	for(int i=0;i<v;i++)
	{
		par[i]=i;
	}
	int count=0;
	int b=0;
	while(count!=v-1)
	{
	edge current=arr[b];
	int s_p=findparent(current.source,par);
	int d_p=findparent(current.destination,par);
	if(s_p!=d_p)
	{
		output[count]=current;
		count++;
		unions(s_p,d_p,par);
		}	
		b++;
	}
	print(output,v);
}

int main()
{
	int v,e,source,destination,weight;
	
	cin>>v;
	cin>>e;
	edge *arr=new edge[e];
	for(int i=0;i<e;i++)
	{
		cout<<"Enter source,destination and weights"<<endl;
		cin>>source>>destination>>weight;
		arr[i].source=source;
	arr[i].destination=destination;
	arr[i].weight=weight;
	}
	krushkal(arr,v,e);
}
