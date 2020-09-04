 
#include <bits/stdc++.h>
#define ll long long int

using namespace std; 

// This is an easier version of the subsequence problem.

void pss(string s, string output){
	// base case
	if(s.size()==0){
		cout<<output<<endl;
		return;
	}
	// recursion call for not including the first character
	pss(s.substr(1),output);
	// recursion call for including the first character
	pss(s.substr(1), s[0] + output);
}


void solve() 

{ 
	string s;
	cin>>s;
	string var="";
	pss(s,var);


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

 