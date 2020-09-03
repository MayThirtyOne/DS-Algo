 
#include <bits/stdc++.h>
#define ll long long int

using namespace std; 


int Factorial(int n){
	if (n==1){
		return 1;
	}
	else
	{
		return n*Factorial(n-1);
	}
}

int Fib(int n){
	if (n==0){
		return 0;
	}
	if (n==1)
		return 1;
	else{
		return Fib(n-1)+Fib(n-2);
	}
}



void solve() 
{ 
	//Basically all the problems of recursion are to be treated like problems of PMI.
	//If we can prove that the base case works, we can effectively prove that it will
	//work for the rest of our sub problems.

	//Factorial is a GOTO example of this concept.

	cout<<Factorial(4)<<endl;
	cout<<Fib(0)<<endl;
	cout<<Fib(1)<<endl;
	cout<<Fib(2)<<endl;
	cout<<Fib(3)<<endl;
	cout<<Fib(4)<<endl;
	cout<<Fib(5)<<endl;



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

 