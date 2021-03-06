 
#include <bits/stdc++.h>
#define ll long long int

using namespace std; 



template<typename T>
class BSTNode{
public:
	T data;
	BSTNode *left;
	BSTNode *right;

	BSTNode(T data){
		this->data=data;
		left=NULL;
		right=NULL;				

	}
};

BSTNode<int>* takeIPLevel(){
	int rootData;
	cout<<"Enter Root Data"<<endl;
	cin>>rootData;
	if(rootData==-1) return NULL;
	BSTNode<int> *root = new BSTNode<int>(rootData);
	queue<BSTNode<int>*> pendingNodes;
	pendingNodes.push(root);
	while(pendingNodes.size()!=0){
		BSTNode<int> *front = pendingNodes.front();
		pendingNodes.pop();

		int LeftData;
		cout<<"Enter Left Data Of"<<front->data<<endl;
		cin>>LeftData;
		if(LeftData!=-1){
			BSTNode<int>* lchild = new BSTNode<int>(LeftData);
			if(front!=NULL)
			front->left=lchild;
		pendingNodes.push(lchild);

		}

		int RightData;
		cout<<"Enter Right Data Of"<<front->data<<endl;
		cin>>RightData;
		if(RightData!=-1){
			BSTNode<int>* rchild = new BSTNode<int>(RightData);
			if(front!=NULL)
			front->right=rchild;
		pendingNodes.push(rchild);

		}
	}
	return root;

}

void PrintLevelWise(BSTNode<int> *root){
	if(root==NULL) return;
	queue<BSTNode<int>*> pendingNodes;
	pendingNodes.push(root);
	while(pendingNodes.size()!=0){
		BSTNode<int> *front = pendingNodes.front();
		pendingNodes.pop();
		cout << front->data<<": ";
		if(front->left!=NULL){
			cout<<" L "<<front->left->data;
			pendingNodes.push(front->left);
		}

		if(front->right!=NULL){
			cout<<" R "<<front->right->data;
			pendingNodes.push(front->right);
		}
		cout<<endl;
	}
}


BSTNode<int>* BSTSearch(BSTNode<int> *root, int k){

	if(root==NULL) return NULL;
	if(k==root->data) return root;
	BSTNode<int> *temp;

	if(k>root->data){
		temp = BSTSearch(root->right,k);
		cout<<"R"<<endl;
	}
	else{
		temp = BSTSearch(root->left,k);
		cout<<"L"<<endl;
	}

	return temp;

}

void printInrange(BSTNode<int>* root, int low, int high){
	if(root==NULL) return;
	if(root->data>=low && root->data <=high) cout<<root->data<<endl;

	if(low>root->data) printInrange(root->right, low, high);
	else printInrange(root->left, low, high);
	if(high<root->data) printInrange(root->left, low, high);
	else printInrange(root->right, low, high);
}

void solve() 
{ 
	BSTNode<int> *root = takeIPLevel();
	PrintLevelWise(root);
	BSTNode<int> *found = BSTSearch(root, 1);
	if(found) cout<<"YES, FOUND: "<<found->data<<endl;
	else cout<<"NOT FOUND"<<endl;
	printInrange(root, 2,4);


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

 