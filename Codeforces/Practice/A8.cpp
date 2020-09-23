 
#include <bits/stdc++.h>
#define ll long long int

using namespace std; 



void solve() 
{ 
	int n;
	cin>>n;
	int a[n][n];
	int d1=0;
	int d2=0;
	int h=0;
	int v=0;
	for(int i=1;i<=n;i++){
		for(int j=1;j<=n;j++){
			cin>>a[i][j];

		}
	}

	for(int i=1;i<=n;i++){
		for(int j=1;j<=n;j++){
			if(i==j){
				d1+=a[i][j];
			}
			

		}
	}

	for(int i=1;i<=n;i++){
		d2+=a[i][n+1-i];
	}

	for(int i=1;i<=n;i++){
		v+=a[i][(n+1)/2];
	}

	for(int i=1;i<=n;i++){
		h+=a[(n+1)/2][i];
	}

	// if(n==1){
	// 	cout<<a[1][1]<<endl;
	// 	return;
	// }
	//cout<<d1<<" "<<d2<<" "<<h<<" "<<v<<endl;
	cout<<(d1+d2+h+v)-3*a[(n+1)/2][(n+1)/2]<<endl;

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

 