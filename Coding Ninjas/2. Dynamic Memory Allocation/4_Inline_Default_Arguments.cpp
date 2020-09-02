 
#include <bits/stdc++.h>
#define ll long long int

using namespace std; 

inline int maxx(int a,int b){

	//Tertiary Operator
	//Inline Command, if lines is greater than 3-4 lines, compiler ignores it
	//If it is between 2-3, it depends, sometimes yes sometimes no
	//If its one liner, compiler happily accepts it.

	return (a>b)?a:b;
}
inline int minn(int a,int b){


	return (a<b)?a:b;
}

int arr_sum(int* a, int size, int start=0){
	int sum=0;
	for(int i=start;i<size;i++) sum+=a[i];
		return sum;
}
void solve() 
{ 
	int m=8;
	int n=9;
	int qq;
	cout<<maxx(m,n)<<endl;
	cout<<minn(m,n)<<endl;
	cout<<minn(8,8)<<endl;

	//Default Arguments, its best to have the right most arguments as default values.
	//Example below.

	cin>>qq;
	int* rr= new int[qq];
	for (int i=0;i<qq;i++) cin>>rr[i];
		cout<<arr_sum(rr,qq,1);
	delete [] rr;




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

 
