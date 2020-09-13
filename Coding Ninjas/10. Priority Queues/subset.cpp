 
#include <bits/stdc++.h>
#define ll long long int

using namespace std; 


string pp(string s){
	if(s.length()==0) return;

	string temp1 = s[0] + pp(s.substr(1));
	string temp2 = pp(s.substr(1)) + s[0];
	cout<<temp1;
	cout<<temp2;
}


void solve() 
{ 

string s= "abc";
pp(s);


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

 