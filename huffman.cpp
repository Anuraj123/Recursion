#include<bits/stdc++.h>
using namespace std;
class heapo{
	public:
	char word;
	int freq;
	heapo *left,*right;
	heapo(char data,int data2)
	{
		this->word=data;
		this->freq=data2;
		left=NULL;
		right=NULL;
	}
};
void print(heapo* root, string str)
{
	 if (!root) 
        return; 
  
    if (root->word != '$') 
        cout << root->word << ": " << str << "\n"; 
  
    print(root->left, str + "0"); 
    print(root->right, str + "1"); 
}
struct compare { 
  
    bool operator()(heapo* l, heapo* r) 
  
    { 
        return (l->freq > r->freq); 
    } 
}; 
huffman(char arr[],int freq[],int size)
{
	heapo *left,*right,*top;
	 priority_queue<heapo*, vector<heapo*>, compare> minHeap; 
	for(int i=0;i<size;i++)
	{
		minHeap.push(new heapo(arr[i],freq[i]));
	}
	while(minHeap.size()!=1)
	{
		left=minHeap.top();
		minHeap.pop();
	right=minHeap.top();
		minHeap.pop();
		top=new heapo('$',left->freq+right->freq);
		top->left=left;
		top->right=right;
		minHeap.push(top);
	}
	print(minHeap.top(),"");
}
int main()
{
	char arr[]={'a','b','c','d','e','f'};
	int freq[]={5,9,12,13,16,45};
	int size=6;
	huffman(arr,freq,size);
}
