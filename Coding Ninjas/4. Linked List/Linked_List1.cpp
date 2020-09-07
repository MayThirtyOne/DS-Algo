 
#include <bits/stdc++.h>
#define ll long long int

using namespace std; 


//we create a class, then we set the access modifier to public
// two variables, the first is data, the second being pointer of next node
// we then create a default constructor which accepts data and sets the pointer address
//to null.

class Node{
public:
	int data;
	Node* next;

	Node(int data){
		this-> data = data;
		next = NULL;
	}



};



void solve() 
{ 
	Node n1(1);
	//Node n3 = new Node(5);
	cout<<n1.data<<endl;
	Node* head = &n1;
	Node n2(2);

	n1.next = &n2;
	cout<<n1.next<<endl;

	cout<<head<<endl;

	cout<<head->data<<endl;

	//Dynamically creating and assigning values;

	Node* n5 = new Node(5);
	Node* n6 = new Node(6);

	n5->next= n6;
	cout<<n5->next->data<<endl;





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

 