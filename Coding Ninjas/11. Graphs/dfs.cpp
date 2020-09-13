 
#include <bits/stdc++.h>
#define ll long long int

using namespace std; 

//implementation of simple graphs

int visited[100] = {0};
vector <int> graph[100];

void bfs(int start){
	queue<int> q;
	q.push(start);
	visited[start]=1;
	while(q.size()!=0){
		int front = q.front();
		q.pop();
		cout<<front<<endl;
		for(int i = 0 ; i<graph[front].size();i++){
			int child = graph[front][i];
			if(visited[graph[front][i]]==0){
				q.push(child);
				visited[child]=1;
			}

		}
	}

}

void dfs(int start){
	cout<<start<<" ";
	visited[start]=1;
	for(int i = 0 ; i< graph[start].size();i++){
		int child = graph[start][i];
		if(visited[child]==0){
			dfs(child);
		}
	}
	return;
}


void solve() 
{ 

	int n, e;
	cin>>n>>e;
	int a,b;

	while(e--){
		cin>>a>>b;
		graph[a].push_back(b);

		//unidirectional graph for now;
		graph[b].push_back(a);
	}


	bfs(1);
	//dfs(1);

	//cout<<graph.size()<<endl;

	



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

 