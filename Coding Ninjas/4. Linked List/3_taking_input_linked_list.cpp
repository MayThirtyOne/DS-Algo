 
#include <bits/stdc++.h>
#define ll long long int

using namespace std; 


class Node{
public:
	int data;
	Node* next;

	Node(int data){
		this->data=data;
		next=NULL;
	}
};

//Complexity of order O(n^2)

Node* inp(){
	int data;
	cin>>data;
	//cout<<data<<endl;
	Node* head = NULL;
	while(data!=-1){
		Node* n = new Node(data);
		if(head == NULL){
			head = n;
		}
		else{
			Node* temp= head;
			while(temp->next!=NULL){
				temp=temp->next;

			}
		temp->next=n;
		}
	cin>>data;
	//cout<<data<<endl;
	}

return head;

}


void printll(Node* head){
	while(head != NULL){
		cout<< head << " "<< head -> data << endl;
		head = head -> next;
	}
}

void solve() 
{ 
	Node* head = inp();
	cout<<head<<endl;
	printll(head);



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

 