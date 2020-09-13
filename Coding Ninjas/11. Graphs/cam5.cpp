

// help the Prayatna pr team
// Well, the annual technical symposium of Department of Computer Technology is around the corner. All that we need, to make it a grand success is Publicity among the peer groups ( ofCourse the sponsors too :P ). We decided to share the job between the student groups. As per the plan we decided to meet people in person and influence them to attend Prayatna. But to meet them we have to go to various student groups. To do so, we had to cut our classes. But being studious. students refused to cut more classes. Instead of meeting every one in person we decided to meet few people such that the person to whom we pass the news will spread it to all his friends. And those friends will pass it to other friends and so on. Your task is to find the number of people to be met by the organizers to spread the news.

// Caution: Large I/O

// Input
// First line of input is 't' - Test cases. Follwed by N, the number of peers in the testcase ( 0 to N-1 ). followed by the number of friend description 'e'. Following are 'e' descriptions of type "a b" denoting 'a' friends with 'b'. If 'a' is friends with 'b' then 'b' is friends with 'a'.

// Output
// Output contains t line, the number of people, the organizers have to meet in person for each test case.

// Example
// Input:
// 2

// 4
// 2
// 0 1
// 1 2

// 3
// 0

// Output:
// 2
// 3
// Explanation
// case 1 : 0 is friends with 1; 1 is friends with 2; so if we pass the news to 0 & 3, news will pass it to the entire N peers.

// case 2 : no one is friends with any one. So we have to meet every one in person.

// Constraints
// t = 10
// 2 <= N <= 100000
// 0 <= e <= N/2



 
#include <bits/stdc++.h>
#define ll long long int

using namespace std; 


vector<int> g[100+10];


void bfs(int source, int visited[]){
	queue<int> q;
	q.push(source);
	visited[source]=1;
	while(q.size()!=0){
		int front = q.front();
		q.pop();
		for(int i =0;i<g[front].size();i++){
			int child = g[front][i];
			if(visited[child]==0){
				q.push(child);
				visited[child]=1;
			}
		}
	}
}



void solve() 
{ 
	
	int visited[100000+10]={0};
	int n, e;
	cin>>n>>e;
	int a,b;
	int c=0;

	for(int i=0;i<n;i++) g[i].clear();

if(e==0) {
	cout<<n<<endl;
	return;
}
	while(e--){
		cin>>a>>b;
		g[a].push_back(b);
		g[b].push_back(a);	

	}

	for(int i =0; i<n;i++){
		if(visited[i]==0){
			bfs(i,visited);
			c+=1;
		}
	}

	

	
	cout<<c<<endl;



} 



int main() 
{ 
    ios_base::sync_with_stdio(false); 
    cin.tie(NULL); 
  

  
    int t = 1; 
    /*is Single Test case?*/ cin >> t; 
    while (t--) { 
        solve(); 
         
    } 
  
    cerr << "Total Time Taken : " << (float)clock() / CLOCKS_PER_SEC << " Seconds!" << endl; 
    return 0; 
} 

