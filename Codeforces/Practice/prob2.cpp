 
#include <bits/stdc++.h>
#define ll long long int

using namespace std; 



void solve() 
{ 
    int a,b,c,d;
    cin>>a>>b>>c>>d;
    unordered_set<int> s;
    s.insert(a);
    s.insert(b);
    s.insert(c);
    s.insert(d);
    cout<<4-s.size()<<endl;

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

 