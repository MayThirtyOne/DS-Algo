 
#include <bits/stdc++.h>
#define ll long long int

using namespace std; 



void solve() 
{ 
	//cout function isn't designed to work perfectly as per intution with pointers.
	// if we try to print the pointer address, it prints the entire string as long as it
	//doesn't encounter /0 and hence it is not recomended.

	char s[]="hey there!";
	char* s1=s;
	cout<<s1<<endl;
	//address was expected here, we got entire string
	//lets try this with character, a single character
	char s2='M';
	char* pp=&s2;
	cout<<pp<<endl;
	//prints everything after M as long as /0 isn't encountered.




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

 