 
#include <bits/stdc++.h>
#define ll long long int

using namespace std; 


//effecively pointer is passed in function if we pass an array, so its better to 
// initialize with pointer itself. 
// Also, we can pass a part of array this way if needed by shifting arr -> arr+n units 
void summ(int* a, int size){
	int sum=0;
	for(int i= 0 ; i<size;i++){
		sum+=a[i];
	}
	cout<<sum<<endl;
}

void solve() 
{ 
	int a[10]={0};
	a[1]=7;
	summ(a,10);



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

 