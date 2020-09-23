 
#include <bits/stdc++.h>
#define ll long long int

using namespace std; 



void solve(){

	string s;
	cin>>s;
	unordered_set<char> st;
	for(int i=0;i<s.length();i++){
		st.insert(s[i]);
	}
	//cout<<st.size()<<endl;
	if(st.size()%2!=0) cout<<"IGNORE HIM!"<<endl;
	else cout<<"CHAT WITH HER!"<<endl;
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

 