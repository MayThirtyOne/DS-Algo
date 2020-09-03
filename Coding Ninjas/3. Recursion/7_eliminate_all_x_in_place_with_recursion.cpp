

//actually quite important

 
#include <bits/stdc++.h>
#define ll long long int

using namespace std; 



void removechar(char s[]){

	//base condition
	if(s[0]=='\0')
		return;
	//recursive call
	if(s[0]!='x'){
		removechar(s+1);
	}
	//small computation and recursive call
	else{
		int i=1;
		for(;s[i]!='\0';i++)
			s[i-1]=s[i];
	

	s[i-1]=s[i];
	removechar(s);
}

}



void solve() 
{ 
	char str[100];
	cin>>str;
	removechar(str);
	cout<<str<<endl;



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

 