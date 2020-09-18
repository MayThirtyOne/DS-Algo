// C++ program for implementation of Bubble sort 
#include <bits/stdc++.h> 
using namespace std; 

void swap(int *xp, int *yp) 
{ 
    int temp = *xp; 
    *xp = *yp; 
    *yp = temp; 
} 

// A function to implement bubble sort 
int bubbleSort(int arr[], int n) 
{ 
    int count=0;
    int i, j; 
    for (i = 0; i < n-1; i++)    
    
    // Last i elements are already in place 
    for (j = 0; j < n-i-1; j++) 
        if (arr[j] > arr[j+1]) {
            swap(&arr[j], &arr[j+1]); 
            count+=1;
        }

        return count;
} 

/* Function to print an array */
void printArray(int arr[], int size) 
{ 
    int i; 
    for (i = 0; i < size; i++) 
        cout << arr[i] << " "; 
    cout << endl; 
} 

// Driver code 
int main() 
{ 
    int arr[] = {8,22,7,9,31,19,5,13}; 
    int n = sizeof(arr)/sizeof(arr[0]); 
    int pp = bubbleSort(arr, n); 
    cout<<pp<<endl;
    cout<<"Sorted array: \n"; 
    printArray(arr, n); 
    return 0; 
} 

// This code is contributed by rathbhupendra 
