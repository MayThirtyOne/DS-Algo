 
#include <bits/stdc++.h>
#define ll long long int

using namespace std; 





int lindex(int* a, int size, int k){
	if(size==0)
		return -1;
	if(a[size]==k)
		return size;
	return lindex(a,size-1,k);
	
	
	

	
}

void solve() 
{ 
	int size;
	cin>>size;
	int arr[size];
	for(int i=0;i<size;i++) cin>>arr[i];
	int k=2;

	cout<<lindex(arr,size,k);



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

 