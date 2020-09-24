 
#include <bits/stdc++.h>
#define ll long long int

using namespace std; 


int variantsCount(int n,int s0,int k,int b,int m,  a)
{
    ll ans = 0;
    vector<int> arr(n);
    arr[0]=s0;
    for(int i = 1;i<n;i++)
    {
        arr[i]=((k*arr[i-1]+b)%m)+1+arr[i-1];
    }
    sort(arr.begin(),arr.end());
    for(int i = 0;i<n;i++)
    {
        
        int z = a/arr[i];
        auto it = upper_bound(arr.begin(),arr.end(),z);
        ans+=it-arr.begin();
     //   cout<<arr[i]<<" "<<z<<" "<<it-arr.begin()<<endl;
    }
    return ans;
}

void solve() 
{ 

	cout<<variantsCount(53144100,30854518,932125114,616256181,18,5690240867915603);




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

 