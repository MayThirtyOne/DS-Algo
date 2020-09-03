 
#include <bits/stdc++.h>
#define ll long long int

using namespace std; 

//This was a bit tricky and useless at the same time. We could do this iteratively and save
//a lot of time.




int lindex(int* a, int size, int k){
	if(size==0)
		return -1;
	int small_calc=lindex(a+1,size-1,k);
	if(small_calc==-1){
		if(a[0]==k)
			return 0;
		else
			return -1;

	
	}

	return small_calc+1;




	
	
	
	

	
}

void solve() 
{ 
	int size;
	cin>>size;
	int arr[size];
	for(int i=0;i<size;i++) cin>>arr[i];
	int k=8;

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

 