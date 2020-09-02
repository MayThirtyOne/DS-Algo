 
#include <bits/stdc++.h>
#define ll long long int

using namespace std; 



void solve() 
{ 
	//Arrays pointers can't be reassigned. That means, a++ isn't possible in place, but
	// some int* p=a+1 is possible.

	int a[10];
	a[0]=5;
	a[1]=6;
	a[2]=7;
	a[3]=8;
	cout<<&a<<endl;
	cout<<&a[0]<<endl;
	int* p= &a[0];
	int* p1=a;
	cout<<*(&a[0])<<endl;
	for (int i=0;i<4;i++){
		cout<<*p1<<endl;
		p1++;

	}




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

 