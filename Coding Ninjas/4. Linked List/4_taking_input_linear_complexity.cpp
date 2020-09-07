 
#include <bits/stdc++.h>
#define ll long long int

using namespace std; 


class Node{
public:
	int data;
	Node *next;

	Node(int data){
		this->data=data;
		next=NULL;
	}
};
//linear complexity

Node* takeIP(){
	int data;
	cin>>data;
	Node* head = NULL;
	Node* tail = NULL;
	while(data!=-1){
		Node *n = new Node(data);
		if(head == NULL){
			head = n;
			tail = n;
		}
		else{
			tail->next = n;
			tail=tail->next;

		}
		cin>>data;

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
	Node* head = takeIP();
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

 