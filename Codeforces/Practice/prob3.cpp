 
#include <bits/stdc++.h>
#define ll long long int

using namespace std; 



void solve() 
{ 
    int n;
    int cnt=0;
    cin>>n;
    while(n--){
    int a,b,c;
    cin>>a>>b>>c;
    if(a+b+c>=2) cnt+=1;
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
  

    int t=1;
    while (t--) { 
        solve(); 
         
    } 
  
    cerr << "Total Time Taken : " << (float)clock() / CLOCKS_PER_SEC << " Seconds!" << endl; 
    return 0; 
} 

 