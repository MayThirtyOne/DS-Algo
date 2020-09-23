 
#include <bits/stdc++.h>
#define ll long long int

using namespace std; 



void solve() 
{ 

int n;
cin>>n;
int arr[n];
for(int i=0;i<n;i++){
	cin>>arr[i];
}

int best = arr[0];
int worst = best;
int cnt=0;
for(int i=1;i<n;i++){
	if(arr[i]<worst || arr[i]>best) cnt+=1;
	best = max(best,arr[i]);
	worst=min(worst,arr[i]);
	

}

cout<<cnt<<endl;

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

 