 
#include <bits/stdc++.h>
#define ll long long int

using namespace std; 


int sl(char s[]){
	if (s[0]=='\0') return 0;

	return 1 + sl(s+1);
}

void solve() 
{ 
	char str[100];
	cin>>str;
	cout<<sl(str)<<endl;



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

 