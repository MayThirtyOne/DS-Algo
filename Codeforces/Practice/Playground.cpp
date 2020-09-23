 
#include <bits/stdc++.h>
#define ll long long int

using namespace std; 



void solve() 
{ 
	int n;
	cin>>n;
	vector<int> v;
	while(n){
		v.push_back(n%2);
		n/=2;
	}
	int pp=4;
	
	while(pp--){
		v.push_back(0);
	}
	reverse(v.begin(), v.end());
	for(int i=0;i<v.size();i++){
		cout<<v[i]<<" ";
	}



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

 