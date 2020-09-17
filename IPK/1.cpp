 
#include <bits/stdc++.h>
#define ll long long int

using namespace std; 



void solve() 
{ 

int n;
cin>>n;
string s;
cin>>s;
int h=0;
int c=0;
for(int i=0;i<n;i++){
	if(s[i]=='U') h+=1;
	if(s[i]=='D') h-=1;
	if(s[i]=='U' && h==0) {
		c+=1;
		cout<<"EXEC"<<endl;
	}


}

cout<<c<<endl;

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

 