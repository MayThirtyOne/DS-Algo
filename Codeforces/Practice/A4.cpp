 
#include <bits/stdc++.h>
#define ll long long int

using namespace std; 



void solve() 
{ 
	int n;
	cin>>n;
	if(n%2!=0){
		cout<<"-1"<<endl;
		return;
	}
	for(int i=2;i<=n;i=i+2){
		cout<<i<<" "<<i-1<<" ";
	}
	cout<<endl;



} 



int main() 
{ 
    ios_base::sync_with_stdio(false); 
    cin.tie(NULL); 
  
#ifndef ONLINE_JUDGE     
freopen("error.txt", "w", stderr); 
#endif 
  
    int t = 1; 

    while (t--) { 
        solve(); 
         
    } 
  
    cerr << "Total Time Taken : " << (float)clock() / CLOCKS_PER_SEC << " Seconds!" << endl; 
    return 0; 
} 

 