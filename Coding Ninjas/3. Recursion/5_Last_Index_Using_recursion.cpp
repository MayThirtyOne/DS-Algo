#include <bits/stdc++.h>

using namespace std;
#define ll long long
#define pb push_back
map <ll,ll> hm;
ll mod = 1e9+7;

int rec(int* arr,int n,int i,int key)
{
    if(i==n)
    {
        return -1;
    }
    if(arr[i]==key)
    {
        return i;
    }

    else return rec(arr,n,i+1,key);
}

int main() {
ios_base::sync_with_stdio(false);
cin.tie(NULL);
    int arr[5]={1,1,2,2,5};
    cout<<rec(arr,5,0,2);
}