 
#include <bits/stdc++.h>
#define ll long long int

using namespace std; 


//bruteforce approach

void solve() 
{ 

int n,m;
cin>>n>>m;
int cnt=0;
for(int i=0;i<1000;i++){
	for(int j=0;j<1000;j++){
		int nval= pow(i,2)+j;
		int mval=i+ pow(j,2);

		if(nval==n && mval ==m) cnt+=1;
	}
}

cout<<cnt<<endl;

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

 