#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() 
{   int n,i;
    cin>>n;
    int a[n];
    for( i=0;i<n;i++)
    {
        cin>>a[i];
    }
    for( i=0;i<n/2;i++)
    {
     int t= a[i];
     a[i]=a[n-i-1];
     a[n-i-1]=t;
    }
    for(i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }
    return 0;
}
