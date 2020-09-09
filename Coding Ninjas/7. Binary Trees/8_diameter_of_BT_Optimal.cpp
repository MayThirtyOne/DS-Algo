 
#include <bits/stdc++.h>
#define ll long long int

using namespace std; 

//suboptimal because the complexity right now is most probably O(N^2) for skewed tree
//and O(nlong(n)) for balanced binary tree.
//We can reduce the complexity back to O(n) using pairs which returns diameter and height
//together

template <typename T>
class BinaryTreeNode{
public:
	T data;
	BinaryTreeNode *left;
	BinaryTreeNode *right;

	BinaryTreeNode(T data){
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

int height(BinaryTreeNode<int> *root){
	if(root==NULL) return 0;
	return 1+max(height(root->left), height(root->right));
}

int diameter(BinaryTreeNode<int> *root){
	if(root == NULL) return 0;

	int total_height = height(root->left) + height(root->right);
	int l_diameter = diameter(root->left);
	int r_diameter = diameter(root->right);

	return max(total_height, max(l_diameter, r_diameter));
}

void PrintLevelWise(BinaryTreeNode<int> *root){
	if(root==NULL) return;
	queue<BinaryTreeNode<int>*> pendingNodes;
	pendingNodes.push(root);
	while(pendingNodes.size()!=0){
		BinaryTreeNode<int> *front = pendingNodes.front();
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

pair<int, int> height_diameter(BinaryTreeNode<int>* root){
	if(root==NULL){
		pair<int,int> p;
		p.first=0;
		p.second=0;
		return p;
	}

	pair<int,int> p_left = height_diameter(root->left);
	pair<int,int> p_right = height_diameter(root->right);

	int h_left=p_left.first;
	int d_left=p_left.second;
	int h_right=p_right.first;
	int d_right=p_right.second;

	int th = 1 + max(h_left,h_right);
	int td = max(h_right+h_left, max(d_left,d_right));

	pair<int,int> result;
	result.first=th;
	result.second=td;
	return result;

}

void solve() 
{ 

	BinaryTreeNode<int> *root = takeIPLevel();
	PrintLevelWise(root);
	cout<<"diameter of tree"<<diameter(root)<<endl;
	pair<int,int> fresult = height_diameter(root);
	cout<<"HEIGHT = "<<fresult.first<<" Diameter = "<<fresult.second<<endl;


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

 