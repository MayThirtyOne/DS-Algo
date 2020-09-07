 
#include <bits/stdc++.h>
#define ll long long int

using namespace std; 


class Node{
public:
	int data;
	Node* next;

	Node(int data){
		this->data = data;
		next=NULL;
	}

};

void printll(Node* head){
	while(head != NULL){
		cout<< head << " "<< head -> data << endl;
		head = head -> next;
	}
}

void solve() 
{ 

//We will create 5 nodes statically at first and then try to print the entire linkedList.

//Static allocation:

Node n1(1);
Node n2(2);
Node n3(3);
Node n4(4);
Node n5(5);

n1.next = &n2;
n2.next = &n3;
n3.next = &n4;
n4.next = &n5;

Node* head = &n1;

printll(head);	
cout<<endl;
printll(&n2);


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

 