 
#include <bits/stdc++.h>
#define ll long long int

using namespace std; 



void solve() 
{ 
	ll a,b,x,y,n;
	cin>>a>>b>>x>>y>>n;
	ll a1=a;
	ll b1=b;
	ll p1,p2;

	if((b1-y)>n){
		b1=b1-n;
		if(b1<y) b1=y;
	}

	else
	{
		a1=a1-(n-(b1-y));
		if(a1<x) a1=x;
		b1=y;
		

	}

	p1=a1*b1;

	if((a-x)>n){
		a=a-n;
		if(a<x) a=x;
	}

	else
	{
		b=b-(n-(a-x));
		if(b<y) b=y;
		a=x;
		

	}

	p2=a*b;

	cout<<min(p1,p2)<<endl;






} 



int main() 
{ 
    ios_base::sync_with_stdio(false); 
    cin.tie(NULL); 
  
#ifndef ONLINE_JUDGE     
freopen("error.txt", "w", stderr); 
#endif 
  
    ll t = 1; 
    /*is Single Test case?*/ cin >> t; 
    while (t--) { 
        solve(); 
         
    } 
  
    cerr << "Total Time Taken : " << (float)clock() / CLOCKS_PER_SEC << " Seconds!" << endl; 
    return 0; 
} 

 