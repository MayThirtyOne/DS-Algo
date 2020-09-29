 
#include <bits/stdc++.h>
#define ll long long int

using namespace std; 
vector<int> G[10000+5];
int vis[10000+5]={0};

void dfs(int v){
	vis[v]=1;
	cout<<v<<endl;
	for(int child : G[v]){
		if(vis[child]==0){
			dfs(child);
		}
	}
}
void solve() 
{ 
	int n;
	cin>>n;
	int m;
	cin>>m;
	
	for(int i=0;i<=n;i++) vis[i]=0;
	while(m--){
		int u,v;
		cin>>u>>v;
		G[u].push_back(v);
		G[v].push_back(u);
	}
	dfs(1);





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

 