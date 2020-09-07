 
#include <bits/stdc++.h>
#include <climits>
#define ll long long int

using namespace std; 


class Stack{
	int *array;
	int index;
	int capacity;

public:
	Stack(int capacity){
		array = new int[capacity];
		index=0;
		capacity=capacity;
	}


		int size(){
			return index;
		}

		bool isempty(){
			return index==0;
		}

		void push(int data){
			if(index==capacity){
				cout<<"STACK FULL! CAN'T PUSH ANYMORE"<<endl;
				return;
			}
			else{
				array[index]=data;
				index++;
			}

		}

		int pop(){
			if(isempty()){
				cout<<"STACK EMPTY! CAN'T POP ANYMORE!"<<endl;
				return INT_MIN;
			}
			else{
				index--;
				return array[index];
			}

		}

		int top(){
			if(isempty()){
				cout<<"STACK EMPTY! NOTHING AT TOP"<<endl;
				return INT_MIN;
			}
			else{
				return array[index-1];
			}
		}

		void show(){

			if (isempty()){
				cout<<"STACK EMPTY! NOTHING TO PRINT"<<endl;
				return;
			}
			else{
			int temp=index;
			for(int i=0;i<temp;i++){
				cout<<array[i]<<" ";
			cout<<endl;
			}
		}
	}

	};



void solve() 
{ 
	Stack s(5);
	s.push(1);
	//s.show();
	s.push(12);
	s.push(13);
	//s.show();
	//cout<<s.top()<<endl;
	s.pop();
	s.pop();
	s.pop();
	s.pop();
	s.show();




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

 