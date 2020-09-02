 
#include <bits/stdc++.h>
#define ll long long int

using namespace std; 



void solve() 
{ 
	//pointer arithmatic isn;t quite useful in general.
	//It becomes very useful in arrays where the memory is assigned continuously.
	// pointer +  n= increases by n*(var_type_size) like by 4 untits in int, 8 units in double etc.

	int i;
	double j;
	int* p=&i;
	double* p1=&j;
	p++;
	p1++;
	cout<<p<<" "<<p1<<endl;



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

 