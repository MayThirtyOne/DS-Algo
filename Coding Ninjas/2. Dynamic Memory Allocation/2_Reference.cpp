 
#include <bits/stdc++.h>
#define ll long long int

using namespace std; 

void increase1(int x){
	x++;
}

void increase2(int& x){
	x++;
}

void solve() 
{ 

	// The & operator creates an alias for our other variable which points to the same 
	//memory location as value assigned to it, simple analogy is a person with two names,
	//They're exactly the same, and changes will be reflected at both the places.
	int i=10;
	int& j=i;
	cout<<i<<" "<<j<<endl;
	i++;
	cout<<i<<" "<<j<<endl;
	j++;
	cout<<i<<" "<<j<<endl;
	i=50;
	cout<<i<<" "<<j<<endl;
	j=60;
	cout<<i<<" "<<j<<endl;
	//Pass by reference and pass by value
	//If we pass by value, the variable gets destroyed when its scope is destroyed.
	//If we pass by reference, the variable can be used in main function as well.
	//Also, we save a lot of memory and space by not copying the same thing over again.
	//Below is an example:
	i=50;
	increase1(i);
	cout<<i<<endl;
	increase2(i);
	cout<<i<<endl;
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

 