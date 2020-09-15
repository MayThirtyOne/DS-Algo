 
#include <bits/stdc++.h>
#define ll long long int
#include <string>
using namespace std; 



void solve() 
{ 
	string s;
	cin>>s;
	int sum;

	map<int, pair<int,int>,greater <int>> mp;
	for(int i=0;i<s.length()-1;i++){
		pair<int,int> p_temp;
		p_temp.first=i+1;
		sum=(s[i]-'0');
		//cout<<"SUM"<<sum<<endl;
		for(int j = i+1;j<s.length();j++){
			if((s[j]-'0')>(s[j-1]-'0')){
				sum+=(s[j]-'0');
			}
			else{
				p_temp.second=j;
				break;
			}
		}

		mp.insert({sum,p_temp});

	}

	map<int, pair<int,int>>::iterator itr;
	for (itr = mp.begin(); itr != mp.end(); ++itr) { 
	cout<<itr->first<<":"<<itr->second.first<<"-"<<itr->second.second<<endl;
	break;

}

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

 