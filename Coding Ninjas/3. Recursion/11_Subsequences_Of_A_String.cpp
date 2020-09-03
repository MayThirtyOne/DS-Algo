 
#include <bits/stdc++.h>
#define ll long long int

using namespace std; 

//pure bruteforce approach;

int ssbf(string s, string sar[]){

	//base case
	if(s.size()==0){
		sar[0]=' ';
		return 1;
	}
	//recursion call
	int var1=ssbf(s.substr(1),sar);

	//small calculation
	for(int i=0;i<var1;i++){
		sar[var1+i]=s[0]+sar[i];
	}
	return 2*var1;
}

void solve() 
{ 
	string s;
	cin>>s;
	int total=pow(2,s.length());
	string* sar= new string[total];
	int size=ssbf(s,sar);
	cout<<size<<endl;

	for(int i=0;i<total;i++){
		cout<<sar[i]<<endl;
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

 