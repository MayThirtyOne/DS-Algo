#include <bits/stdc++.h>
#define int long long int

using namespace std;


int modFact(int n, int p) 
{ 
    if (n >= p) 
        return 0; 
  
    int result = 1; 
    for (int i = 1; i <= n; i++) 
        result = (result * i) % p; 
  
    return result; 
} 

int CeilIndex(vector<int>& v, int l, int r, int key) 
{ 
	while (r - l > 1) { 
		int m = l + (r - l) / 2; 
		if (v[m] >= key) 
			r = m; 
		else
			l = m; 
	} 

	return r; 
} 

int LongestIncreasingSubsequenceLength(vector<int>& v) 
{ 
	if (v.size() == 0) 
		return 0; 

	vector<int> tail(v.size(), 0); 
	int length = 1; 

	tail[0] = v[0]; 
	for (size_t i = 1; i < v.size(); i++) { 

		if (v[i] < tail[0]) 
			tail[0] = v[i]; 

		else if (v[i] > tail[length - 1]) 
			tail[length++] = v[i]; 

		
		else
			tail[CeilIndex(tail, -1, length - 1, v[i])] = v[i]; 
	} 

	return length; 
} 

void solve(){
	int n;
	cin>>n;
	vector<int> v1;
	for(int i=0;i<n;i++){
		int rr;
		cin>>rr;
		v1.push_back(rr);
	}
	cout<< modFact(LongestIncreasingSubsequenceLength(v1), 1000000007) << '\n'; 

}

signed main() 


{ 
	int t;
	cin>>t;
	while(t--) solve();
	
	return 0; 
} 
