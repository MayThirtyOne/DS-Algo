 
#include <bits/stdc++.h>
#define ll long long int

using namespace std; 



template <typename T>
class BinaryTreeNode{
public:
	T data;
	BinaryTreeNode *left;
	BinaryTreeNode *right;

	BinaryTreeNode(int data){
		this->data=data;
		left=NULL;
		right=NULL;
	}
};	


BinaryTreeNode<int>* takeIPLevel(){
	int rootData;
	cout<<"Enter Root Data"<<endl;
	cin>>rootData;
	if(rootData==-1) return NULL;
	BinaryTreeNode<int> *root = new BinaryTreeNode<int>(rootData);
	queue<BinaryTreeNode<int>*> pendingNodes;
	pendingNodes.push(root);
	while(pendingNodes.size()!=0){
		BinaryTreeNode<int> *front = pendingNodes.front();
		pendingNodes.pop();

		int LeftData;
		cout<<"Enter Left Data Of"<<front->data<<endl;
		cin>>LeftData;
		if(LeftData!=-1){
			BinaryTreeNode<int>* lchild = new BinaryTreeNode<int>(LeftData);
			if(front!=NULL)
			front->left=lchild;
		pendingNodes.push(lchild);

		}

		int RightData;
		cout<<"Enter Right Data Of"<<front->data<<endl;
		cin>>RightData;
		if(RightData!=-1){
			BinaryTreeNode<int>* rchild = new BinaryTreeNode<int>(RightData);
			if(front!=NULL)
			front->right=rchild;
		pendingNodes.push(rchild);

		}
	}
	return root;

}

BinaryTreeNode<int>* takeBIP(){
	int rootData;
	cout<<"Enter Root"<<endl;
	cin>>rootData;
	if(rootData==-1){
		return NULL;
	}

	BinaryTreeNode<int> *root=new BinaryTreeNode<int>(rootData);
	BinaryTreeNode<int> *lchild = takeBIP();
	BinaryTreeNode<int> *rchild = takeBIP();
	root->left=lchild;
	root->right=rchild;
	return root;



}

void PrintBTree(BinaryTreeNode<int> *root){
	//base condition
	if(root == NULL){
		return;
	}
		cout<<root->data<<": ";
		if(root->left!=NULL)
		cout<<" L "<<root->left->data;
		if(root->right!=NULL)
		cout<<" R "<<root->right->data;
		cout<<endl;
		//recursive call;
		
		PrintBTree(root->left);
		PrintBTree(root->right);
}

void solve() 
{ 

	// BinaryTreeNode<int> *root = new BinaryTreeNode<int>(1);
	// BinaryTreeNode<int> *lchild = new BinaryTreeNode<int>(2);
	// BinaryTreeNode<int> *rchild = new BinaryTreeNode<int>(3);

	// root->left=lchild;
	// root->right=rchild;

	// BinaryTreeNode<int> *root = takeBIP();
	BinaryTreeNode<int> *root = takeIPLevel();

	PrintBTree(root);



} 



int main() 
{ 
    ios_base::sync_with_stdio(false); 
    cin.tie(NULL); 
  
#ifndef ONLINE_JUDGE     
freopen("error.txt", "w", stderr); 
#endif 
  
    int t = 1; 
    /*is Single Test case?*/ cin >> t; 
    while (t--) { 
        solve(); 
         
    } 
  
    cerr << "Total Time Taken : " << (float)clock() / CLOCKS_PER_SEC << " Seconds!" << endl; 
    return 0; 
} 

 