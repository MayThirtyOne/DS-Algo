 
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

void printTreeLevelWise(TreeNode<int> *root){
	queue<TreeNode<int>*> pendingNodes;
	pendingNodes.push(root);
	while(pendingNodes.size()!=0){
		TreeNode<int> *temp= pendingNodes.front();
		pendingNodes.pop();
		cout<<temp->data<<": ";
		for(int i=0;i<temp->children.size();i++){
			cout<<temp->children[i]->data<<",";
			pendingNodes.push(temp->children[i]);
		}
		cout<<endl;
	}
}

int total_Nodes(TreeNode<int> *root){
	int ans=1;

	for(int i=0;i<root->children.size();i++){
		ans+=total_Nodes(root->children[i]);
	}
	return ans;
}

int sumofNodes(TreeNode<int> *root){
	int sum=root->data;
	for(int i=0;i<root->children.size();i++){
		sum+=sumofNodes(root->children[i]);
	}
	return sum;
}

int maxOfNodes(TreeNode<int> *root){
	int curr_max=root->data;

	for(int i=0;i<root->children.size();i++){
		int newMax=maxOfNodes(root->children[i]);
		if(newMax>curr_max) curr_max = newMax;
	}

	return curr_max;
}

void solve() 
{ 
	TreeNode<int> *root = takeIPLevelWise();
	printTreeLevelWise(root);
	cout<<"TOTAL NODES "<<total_Nodes(root)<<endl;
	cout<<"SUM OF  NODES "<<sumofNodes(root)<<endl;
	cout<<"MAX OF  NODES "<<maxOfNodes(root)<<endl;




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

 