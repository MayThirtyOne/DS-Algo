 
#include <bits/stdc++.h>
#define ll long long int

using namespace std; 



void solve() 
{ 
//Double pointers are nothing new, just a heirarchy of pointers, which means, a pointer that
// points to another pointer's address.

	int i =10 ;
	int* p=&i;
	int** p1=&p;
	cout<<p<<" "<<p1<<endl;
	cout<<*p<<" "<<**p1<<endl;


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

 