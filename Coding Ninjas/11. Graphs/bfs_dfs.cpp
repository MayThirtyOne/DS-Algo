 
#include <bits/stdc++.h>
#define ll long long int

using namespace std; 


void dfs(int source, vector<int> &graph, int vis[]){
	vis[source]=1;
	for(int i=0;i<graph[source].size();i++){
		int child = graph[source][i];
		if(vis[child]==0){
			dfs(child, graph, vis);
		}
	}

	return;

}


void solve() 
{ 

int n,e;
cin>>n>>e;
int c=0;
int vis[n+1]={0};
vector<int> graph[n];
int a,b;
while(e--){
	cin>>a>>b;
	graph[a].push_back(b);
	graph[b].push_back(a);	
}

for(int i=0;i<n;i++){
	if(vis[i]==0){
		dfs(i,graph,vis);
		c+=1;
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
    /*is Single Test case?*/ cin >> t; 
    while (t--) { 
        solve(); 
         
    } 
  
    cerr << "Total Time Taken : " << (float)clock() / CLOCKS_PER_SEC << " Seconds!" << endl; 
    return 0; 
} 

 