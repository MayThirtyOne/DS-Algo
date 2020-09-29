#include<bits/stdc++.h>
using namespace std;

vector<int> G[10000+5];
int vis[10000+5]={0};

void dfs(int v){
	vis[v]=1;
	for( int child: G[v]){
		if(!vis[child]){
			dfs(child);
		}
	}
}

int main() {
	int n,e;
	cin>>n>>e;
	while(e--){
		int u,v;
		cin>>u>>v;
		G[u].push_back(v);
		G[v].push_back(u);
	}
	int count=0;
	for(int i=1;i<=n;i++){
		if(!vis[i]){
			dfs(i);
			count+=1;
		}
	}
	cout<<count<<endl;

}

