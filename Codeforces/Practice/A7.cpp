 
#include <bits/stdc++.h>
#define ll long long int

using namespace std; 


//did a similar problem in the past. Easy implementation.


void solve() 
{ 
	int n,m;
	cin>>n>>m;
	char c;
	vector<int> x;
	vector<int> y;
	for(int i=1;i<=n;i++){
		for(int j=1;j<=m;j++){
			cin>>c;
			if(c=='*'){
				x.push_back(i);
				y.push_back(j);
			}
			

		}
	}

	int xres=0;
	int yres=0;
	for(int i=0;i<x.size();i++){
		xres^=x[i];

	}

	for(int i=0;i<y.size();i++){
		yres^=y[i];

	}

	cout<<xres<<" "<<yres<<endl;


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

 