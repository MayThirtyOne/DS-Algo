#include <iostream>
#define int long long int
using namespace std;


int  hashArr[1000009];

void primeFactors(int  n)  
{  
    while (n % 2 == 0)  
    {  
        hashArr[2]++;
        n = n/2;  
    }  
    for (int  i = 3; i*i <= (n); i = i + 2)  
    {  
        while (n % i == 0)  
        {  
            hashArr[i]++;
            n = n/i;  
        }  
    }  
    if (n > 2)  
        hashArr[n]++;
}  

signed main() {
    for(int i = 0;i<1000009;i++)
    {
        hashArr[i]=0;
    }
    int  n;
    cin>>n;
    for(int i = 0;i<n;i++)
    {
        int  input;
        cin>>input;
        primeFactors(input);
    }
    for(int  i = 0;;i++)
    {
        if(hashArr[i]>=2)
        {
            cout<<i<<endl;
            break;
        }	
    }
}