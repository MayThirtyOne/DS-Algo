 
#include <bits/stdc++.h>
#define ll long long int

using namespace std; 



void solve() 
{ 

int n;
cin>>n;
vector<int> v(n);

for(int i=0;i<n;i++){
	cin>>v[i];
	
}

sort(v.begin(),v.end());
bool flag=false;
for(int i=1;i<v.size();i++){
	if(abs(v[i]-v[i-1]>1)){
		flag=true;
		break;
	}
}


if(flag) cout<<"NO"<<endl;
else cout<<"YES"<<endl;


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

 