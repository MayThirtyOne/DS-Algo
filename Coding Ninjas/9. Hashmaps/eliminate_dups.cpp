 
#include <bits/stdc++.h>
#define ll long long int

using namespace std; 


vector<int> rmdups(int *arr, int size){
	unordered_map<int, int> hm;
	vector<int> output;
	for(int i=0;i<size;i++ ){
		if(hm[arr[i]]==0){
			output.push_back(arr[i]);
			hm[arr[i]]+=1;
		}
	}
	return output;
}


void solve() 
{ 

	int n;
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++)
		cin>>a[i];
	vector<int> v= rmdups(a,n);
	for(int i=0;i<v.size();i++)
		cout<<v[i]<<" ";




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

 