 
#include <bits/stdc++.h>
#define ll long long int

using namespace std; 

vector<int> G[10000+10];
int vis[10000+10];

void dfs(int node){
	vis[node]=1;
	for( int child : G[node]){
		if(!vis[child])
			dfs(child);
	}
}

void solve() 
{ 
	int n,m;
	cin>>n>>m;
	int mm=m;
	int count=0;
	while(m--){
		int u,v;
		cin>>u>>v;
		G[u].push_back(v);
		G[v].push_back(u);
	}

	for(int i=1;i<=n;i++){
		if(!vis[i]){
			dfs(i);
			count+=1;
		}
	}

	if(count==1 && mm==n-1) cout<<"YES"<<endl;
	else cout<<"NO"<<endl;



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

 