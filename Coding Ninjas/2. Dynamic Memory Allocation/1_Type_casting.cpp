 
#include <bits/stdc++.h>
#define ll long long int

using namespace std; 



void solve() 
{ 
	int i=65;
	char c=i;
	cout<<i<<endl;
	cout<<c<<endl;
	//Above is an example of implicit typecasting. Compiler handles it by itself.

	int* p=&i;
	char* cc=(char*)p;

	cout<<cc<<endl;
	cout<<(cc+1)<<endl;
	//Null character because of little endian machines, least significant bit comes first.




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

 