 
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


TreeNode<int>* takeIPLevelWise(){
	int data;
	cout<<"Enter The Root Of The Tree"<<endl;
	cin>>data;
	TreeNode<int> *root = new TreeNode<int>(data);
	queue<TreeNode<int>*> pendingNodes;
	pendingNodes.push(root);
	while(pendingNodes.size()!=0){
		TreeNode<int> *front = pendingNodes.front();
		pendingNodes.pop();
		int tchild;
		cout<<"How Many Children Of"<<front->data<<"?"<<endl;
		cin>>tchild;
		while(tchild--){
			int newdata;
			cout<<"Enter Children"<<endl;
			cin>>newdata;
			TreeNode<int> *temp = new TreeNode<int>(newdata);
			front->children.push_back(temp);
			pendingNodes.push(temp);
		}

	}

	return root;
}

void printTree(TreeNode<int> *root){
	cout<<root->data<<": ";
	for(int i = 0; i<root->children.size();i++){
		cout<<root->children[i]->data<<",";
	}
	cout<<endl;

	for(int i = 0; i<root->children.size();i++){
		printTree(root->children[i]);
	}

}

void printLeaves(TreeNode<int> *root){
	if(root->children.size()==0){
		cout<<root->data<<" ";
	}
	else{
		for(int i =0 ;i< root->children.size();i++){
			printLeaves(root->children[i]);
		}
	}
}

void solve() 
{ 
	TreeNode<int> *root = takeIPLevelWise();
	printTree(root);
	printLeaves(root);




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

 