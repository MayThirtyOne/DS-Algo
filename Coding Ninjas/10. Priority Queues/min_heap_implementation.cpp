 
#include <bits/stdc++.h>
#define ll long long int

using namespace std; 



class minheap{
public:
	vector<int> mheap;
	minheap(){

	}
	void insert(int data){
		mheap.push_back(data);
		int cindex = mheap.size()-1;
		while(cindex>0){
			int pindex = (cindex-1)/2;
			if(mheap[cindex]<mheap[pindex]){
				int temp=mheap[pindex];
				mheap[pindex]=mheap[cindex];
				mheap[cindex]=temp;
			}
			else break;
			cindex=pindex;
		}
	}

	void printheap(){
		for(int i=0;i<mheap.size();i++) cout<<mheap[i]<<" ";
	}

	
};

void solve() 
{ 
	minheap mh1;
	int n;
	cin>>n;
	int ip;
	while(n--){
		cin>>ip;
		//cout<<ip<<endl;
		mh1.insert(ip);
	}


	mh1.printheap();




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

 