 
#include <bits/stdc++.h>
#define ll long long int

using namespace std; 

//https://practice.geeksforgeeks.org/problems/upper-lower-combination-of-string

// Given a String str , print all the combination of the string with considering upper as well as lower combinations of all the characters.

// Explanation:- lets say String str = "the"  combination are like :- The , tHe , thE ...etc.

// Input:- String str ; 

// Output:- print all upper Lower character combinations.

int combis(string s, string* sar){
	//base case
	if(s.size()==1){

		sar[0]=tolower(s[0]);
		sar[1]=toupper(s[0]);
		return 2;
	}
	//calling recursion
	int var= combis(s.substr(1),sar);
	char c = tolower(s[0]);
	char d = toupper(c);

	//small calculation
	for(int i=0; i< var; i++){
		sar[i+var] = d+sar[i];
		
	}

	for(int i=0; i< var; i++){
		sar[i] = c + sar[i];		
	}

	return 2*var;

}


void solve() 
{ 
	string s;
	cin>>s;
	//AbcD

	string* sar = new string[1000];

	int k= combis(s,sar);
	int size = sizeof(sar)/sizeof(sar[0]);
	for(int i=0;i<100;i++)
		cout<<sar[i]<<endl;





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

 