 
#include <bits/stdc++.h>
#define ll long long int

using namespace std; 

void rmdups(char str[]){

	//base condition
	if (strlen(str)<=1)
	return;
	//recursion call
	rmdups(str+1);

	//small calculation

	if(str[0]==str[1]){
		int i=1;
		for(;str[i]!='\0';i++)
			str[i-1]=str[i];

		str[i-1]=str[i];
	}




}

void solve() 
{ 

char str[100];
cin >> str;

rmdups(str);
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

 