 
#include <bits/stdc++.h>
#define ll long long int

using namespace std; 



void solve() 
{ 

string s;
cin>>s;
int sum=0;
for(int i=0;i<s.length();i++){
	int index=((int)s[i])%32 -1;
	cout<<index<<endl;
	sum+=27-index;
}
cout<<sum<<endl;

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

 