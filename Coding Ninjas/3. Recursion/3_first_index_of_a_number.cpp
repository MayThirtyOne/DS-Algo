 
#include <bits/stdc++.h>
#define ll long long int

using namespace std; 


//Base case in arrays is mostly SIZE of array, if SIZE == 0 then, we have certainly not
//found the element, so we return -1;
//If we find the element at first position, we return the first position, that us 0
//If not, we make the recursion call, by passing the smaller array of size-1
//We add one because the found index is one less than required value due to size shrinking
//in recursion stack, so we return value+1, if and only if that value was not -1
//or it would just return 0.


int findex(int* a, int size, int k){
	if(size==0)
		return -1;
	if(a[0]==k)
		return 0;
	int svalue= findex(a+1,size-1,k);
	if(svalue!=-1)
		return svalue+1;
	else
		return -1;
	
	

	
}

void solve() 
{ 
	int size;
	cin>>size;
	int arr[size];
	for(int i=0;i<size;i++) cin>>arr[i];
	int k=4;

	cout<<findex(arr,size,k);
	cout<<findex(arr,size,k+1);



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

 