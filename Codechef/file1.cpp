 
#include <bits/stdc++.h>
#define int long long int

using namespace std; 



int findSubarraySum(int arr[], int n, int sum) 
{ 

    unordered_map<int, int> prevSum; 
  
    int res = 0; 
  

    int currsum = 0; 
  
    for (int i = 0; i < n; i++) { 
  

        currsum += arr[i]; 

        if (currsum == sum) 
            res++; 

        if (prevSum.find(currsum - sum) != prevSum.end()) 
            res += (prevSum[currsum - sum]); 
 
        prevSum[currsum]++; 
    } 
  
    return res; 
} 

void solve() 
{ 
int n;
cin>>n;
int arr[n];
for(int i=0;i<n;i++) cin>>arr[i];
cout << findSubarraySum(arr, n, 0);


} 



signed main() 
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

 