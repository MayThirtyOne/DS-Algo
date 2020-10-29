 
#include <bits/stdc++.h>


using namespace std; 






int main() 
{ 
    int n;
    cin>>n;
    int arr[n];
    int count=0;
    int i=0;
    int flag=0;
    while(!cin.eof()){
    	cin>>arr[i];
    	if(arr[i]<0){
    		flag=1;
    	}
    	i+=1;
    	count+=1;
    }
    if(count!=n || flag==1){
    	cout<<"Wrong Input"<<endl;
    	return 0;
    }


    for(int i=1;i<n;i++){
    	if(arr[i-1]==arr[i]){
    		arr[i]+=1;
    	}
    }

    long long int sum = 0;
    for(int i=0;i<n;i++){
    	sum+=arr[i];
    }

    cout<<sum<<endl;


    return 0; 
} 

 