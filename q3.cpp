#include<bits/stdc++.h>
using namespace std;
class node
{
	public:
		int data;
		node* left;
		node* right;
};

	priority_queue <int, vector<int>, greater<int> > q;			
void createminheap(char arr[],int freq[],int size)
{
	for(int i=0;i<size;i++)
	{
		q.push(freq[i]);
	}
return;
}
node* buildhuffmantree(char arr[],int freq[],int size)
{
	createminheap(arr,freq,size);
node* newnode1=new node();
node* newnode=new node();
		node* root=new node();	
	while(q.size()>1)
	{

		newnode->data=q.top();
		q.pop();
		newnode1->data=q.top();
		q.pop();
		root->data=newnode->data+newnode1->data;
		q.push(root->data);
	root->right=newnode;
	root->left=newnode1;
	
	}
	cout<<root->data<<endl;
}
node* huffman(char arr[],int freq[],int size)
{
	buildhuffmantree(arr,freq,size);

}
int main()
{
	char arr[]={'A','B','C','D','E'};
	int freq[]={4,4,4,5,15};
	huffman(arr,freq,5);
	return 0;
}
