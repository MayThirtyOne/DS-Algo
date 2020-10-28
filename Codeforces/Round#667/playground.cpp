 
#include <bits/stdc++.h>
using namespace std; 



void out(int i){
	if(i==1) cout<<"Malasiya"<<endl;
	else if(i==2) cout<<"Australia"<<endl;
	else if(i==3) cout<<"Germany"<<endl;
	else if(i==4) cout<<"Dubai"<<endl;
	else cout<<"France"<<endl;
}


int main() 
{ 
	int vote[6]={0};

	int c;
	while(!cin.eof()){
		cin>>c;
		int num = c;

		if(num<1 || num>5){
			cout<<"INVALID INPUT"<<endl;
			return 0;
		}

		else

		vote[num]+=1;
	}


	int largest = -1;
	for(int i=1;i<=5;i++){
		if(vote[i]>largest){
			largest=vote[i];
		}
	}

	for(int i=1;i<=5;i++){
		
		if(vote[i]==largest){ out(i);
		}
	}


     
    return 0; 
} 

 