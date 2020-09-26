 
#include <bits/stdc++.h>
#define ll long long int

using namespace std; 

vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
    	vector<int> v;
    	for(int i=0;i<nums.size();i++){
    		v.push_back(nums[i]);
    	}

    	sort(v.begin(),v.end());
    	unordered_map<int,int> mp;

    	for(int i=0;i<v.size();i++){
    		if(mp[v[i]]==0) mp[v[i]]=i;
    		else continue;
    	}

    	vector<int> res;
    	for(int i=0;i<nums.size();i++){
    		res.push_back(mp[nums[i]]);
    	}
        
        return res;
        
    }


void solve() 
{ 
	int n;
	int temp;
	cin>>n;
	vector<int> nums;
	for(int i=0;i<n;i++){
		cin>>temp;
		nums.push_back(temp);

	}
	vector<int> r



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

 