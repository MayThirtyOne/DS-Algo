 
#include <bits/stdc++.h>
#define ll long long int

using namespace std; 

vector<int> G[1000+1];
int vis[1000+1]={0};
int diss[1000+1]={0};

void dfs(int node, int curd ){
	vis[node]=1;
	diss[node]=curd;
	for( int child : G[node]){
		if(!vis[child]){
			dfs(child, 1 + diss[node]);
		}

	}
}

void solve() 
{ 
	int n;
	cin>>n;
	int e = n-1;
	while(e--){
		int u,v;
		cin>>u>>v;
		G[u].push_back(v);
		G[v].push_back(u);
	}

	int q;
	cin>>q;
	int qq=q;
	dfs(1,0);
	int mind = INT_MAX;
	unordered_map<int,int> mp;
	while(q--){
		int city;
		cin>>city;
		mind=min(mind,diss[city]);
		mp.insert(make_pair(city, diss[city]));
	}

	vector<int> fres;

	unordered_map<int,int>::iterator it = mp.begin();
	while(qq--){
		if(it->second==mind){
			fres.push_back(it->first);
		}
		it++;

	}

	sort(fres.begin(),fres.end());
	cout<<fres[0]<<endl;
	
	// for(int i=1;i<=n;i++) cout<<diss[i]<<endl;
	


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

 