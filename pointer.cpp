#include <stdio.h>
#include<iostream>
#include<math.h>
using namespace std;
void update(int *a,int *b) 
{
    cout<< (*a)+(*b)<<"\n";
    if((*a)>(*b))
    {
     int  x=(*a)-(*b);
     cout<<x;  
    }
    else 
    {
        int y=(*b)-(*a);
        cout<<y;
    }
}

int main() 
{
    int x,y;
    cin>>x>>y;
    update(&x,&y);
    return 0;
}
