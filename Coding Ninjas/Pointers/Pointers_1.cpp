 
#include <bits/stdc++.h>
#define ll long long int

using namespace std; 



void solve() 
{ 
	// & fetches the starting address of variable from memory.
	// (data_type)* var_name is pointer variable which stores this memory address.
	// * dereference operator, we can access variable via variable name or pointer address by dereferencing them.
	// Always initialize pointers or assign them NULL values as they can access memory at dangerous places.
	// Sizeof pointer = 8 bytes generally.
	int i=10;
	int* p= &i;
	cout<<p<<endl;
	cout<<*p<<endl;



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

 