 
#include <bits/stdc++.h>
#define ll long long int

using namespace std; 

//To find frequency of particular character from a word, we can use an array of size 256
// since all character ascii values lies in this range. But sometimes that;s not enough
// So, we have to use something better

// First implementation of this could be a linked list.

// Insertion: O(n)
// Deletion : O(n)
// Searching : O(n)

// Second and a better option would be: BSTs.
// Insertion, deletion and Searching will be O(logN)

// We want something even faster.

// That is why we go for HASHtables




void solve() 
{ 

	unordered_map<string, int> hm;

	pair<string, int> p;
	p.first="abc";
	p.second=2;

	hm.insert(p);
	cout<<hm["abc"]<<endl;


	hm["bcd"]=5;
	cout<<hm["bcd"]<<endl;

	cout<<hm.size()<<endl;

	cout<<hm.at("abc")<<endl;

	//cout<<hm.at("eef")<<endl;
	cout<<hm.size()<<endl;
	cout<<hm["eef"]<<endl;
	cout<<hm.size()<<endl;

	cout<<hm.count("eef")<<endl;

	hm.erase("eef");

	cout<<hm.count("eef")<<endl;
	cout<<hm.size()<<endl;




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

 