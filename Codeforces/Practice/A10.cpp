 
#include <bits/stdc++.h>
#define ll long long int

using namespace std; 



void solve() 
{ 
	int n;
	int k;
	cin>>n>>k;
	int arr[n];
	int cnt=0;
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}

	sort(arr,arr+n,greater<int>());
	int mark=arr[k-1];
	for(int i=0;i<n;i++){
		if(arr[i]>=mark && arr[i]>0) cnt+=1;
	}

	cout<<cnt;


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

 