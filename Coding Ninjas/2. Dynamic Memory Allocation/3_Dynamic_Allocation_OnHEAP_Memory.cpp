//Very Useful 


#include <bits/stdc++.h>
#define ll long long int

using namespace std; 



void solve() 
{ 
	//Taking user input N and creating array at runtime is bad idea since stack memory is
	//really limited. WE should use HEAP memory for dynamically allocating space to
	//previously unknown size of array. Example below:

	// RETURN TYPE POINTER  VAR_NAME = new VAR_TYPE[SIZE]; 
	int n;
	cin>>n;
	int* arr= new int[n];
	for(int i=0;i<n;i++) cin>>arr[i];
	for(int i=0;i<n;i++) cout<<arr[i]<<endl;	

	//Dynamically allocated memory MUST be cleared manually. 
	//To clear single element and an array, the code is written below:

	int* integer1= new int;
	*integer1 = 5;
	cout<<*integer1<<endl;
	delete integer1;
	cout<<integer1<<endl;
	cout<<*integer1<<endl;

	delete [] arr;
	for(int i=0;i<n;i++) cout<<arr[i]<<endl;




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

 