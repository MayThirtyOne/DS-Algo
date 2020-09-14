#include <bits/stdc++.h>
#include <cmath>
#define ll long long int


using namespace std; 


int getSoln(pair<int,int> p, pair<int,int> p1, pair<int,int> p2){
        long dot = p.first*(p2.first-p1.first)+p.second*(p2.second-p1.second);
        if(dot==0l)return 0;
        if(dot>0l)return 1;
        else return -1;
    }


void solve() 
{ 
	int N; cin>>N;
	vector<pair<long long ,long long>> pointy;
            
            int n = 406;
            double theta = M_PI/(2*n+0.0);
            int mxRad = 0;
            for(int i=0;i<N;i++){
                long long x,y;
                cin>>x>>y;
                pointy.push_back(make_pair(x,y));
            }
            mxRad=2000000000;
            int flag = 0;
            for(int i = 0; i<=4*n+1;i++){
                int pos = 0;
                int zer = 0;
                int neg = 0;
                double radius = mxRad;
                int x = (int)ceil(radius*cos(i*theta));
                int y = (int)ceil(-radius*sin(i*theta));
                pair<int,int> p =  {x,y};
                int state = 0;
                int ctr = 0;
                int flag2 = 0;
                for(int j=0;j<N;j++){           
                	long long var1=pointy[j].first;                	
                	long long var2=pointy[j].second;
                	pair<int,int> p1 = {var1,var2};
                    long long var3=pointy[(j+1)%N].first;                	
                	long long var4=pointy[(j+1)%N].second;
                	pair<int,int> p2 = {var3,var4};
                    int res = getSoln(p,p1,p2);
                    if(res==0){flag2=1;break;}
                    if(res>0){if(state==-1)ctr++;state=+1;pos++;}
                    if(res<0){if(state==+1)ctr++;state=-1;neg++;}
                }
                if(flag2==0&&ctr<=2){
                    cout<<x<<" "<<y<<endl;
                    flag=1;
                    break;
                }
            }
            if(flag==0) cout<<"0 0"<<endl;


} 



int main() 
{ 
    ios_base::sync_with_stdio(false); 
    cin.tie(NULL); 
  
#ifndef ONLINE_JUDGE     
freopen("error.txt", "w", stderr); 
#endif 
  
    int t = 1; 
     cin >> t; 
    while (t--) { 
        solve(); 
         
    } 
  
    cerr << "Total Time Taken : " << (float)clock() / CLOCKS_PER_SEC << " Seconds!" << endl; 
    return 0; 
}