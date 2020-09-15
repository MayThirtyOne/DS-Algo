 
#include <bits/stdc++.h>
#define ll long long int

using namespace std; 


int minsteps(int n, int *arr){
	if(n==1) {
		arr[n]=0
		return 0;

	}
	int x;
	int y = INT_MAX;
	int z = INT_MAX;
	if(minsteps(n-1,arr)==0){
		x=minsteps(n-1,arr);
		arr[n]=x;
}

	if(n%2==0) y=minsteps(n/2,arr);
	if(n%3==0) z=minsteps(n/3,arr);

	int ans = min(x,min(y,z)) +1;
	return ans;
}


void solve() 
{ 

	int n;
	cin>>n;
	int arr[n+10];
	cout<<minsteps(n,arr)<<endl;



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

 