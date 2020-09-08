 
#include <bits/stdc++.h>
#define ll long long int

using namespace std; 


template <typename T>
class TreeNode{
public:
	T data;
	vector<TreeNode*> children;

	TreeNode(T data){
		this->data=data;
	}

};

TreeNode<int>* takeTreeInput(){
	int rootData;
	cout<<"Enter Root Data"<<endl;
	cin>>rootData;
	TreeNode<int>* root = new TreeNode<int>(rootData);
	int size;
	cout<<"How Many Children?"<<endl;
	cin>>size;
	for(int i=0;i<size;i++){
		TreeNode<int>* child = takeTreeInput();
		root->children.push_back(child);
	}
return root;

}

void printTree(TreeNode<int>* root ){

	//edge case
	if(root==NULL) return;

	cout << root->data<<":";
	for(int i=0;i<root->children.size();i++){
		cout<<root->children[i]->data<<",";	
	}
	cout<<endl;
	for(int i=0;i<root->children.size();i++){

		//recursive call
		printTree(root->children[i]);
	}
}

void solve() 
{ 

	TreeNode<int>* root = takeTreeInput();
	printTree(root);



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

 