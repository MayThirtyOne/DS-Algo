 
#include <bits/stdc++.h>
#define ll long long int

using namespace std; 



bool sorteddsc(int* a, int size){
	if (size==0||size==1) return true;

	if(a[0]<a[1]) return false;

	return sorteddsc(a+1,size-1);
}

bool sortedasc(int* a, int size){
	if (size==0||size==1) return true;

	if(a[0]>a[1]) return false;

	return sortedasc(a+1,size-1);
}


void solve() 
{ 
	int n;
	cin>>n;
	int* a= new int[n];
	for(int i=0;i<n;i++) cin>>a[i];
	cout<<sortedasc(a,n)<<endl;
	cin>>n;
	for(int i=0;i<n;i++) cin>>a[i];
	cout<<sorteddsc(a,n)<<endl;
	delete [] a;



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

 