#include<iostream>
#include<cstdio>
#include<math.h>
using namespace std;
int max_of_four(int a, int b, int c, int d)
{
   if(a>b && a>c && a>d)
   {
       return a;
   }
   else if(b>a && b>c && b>d)
   {
       return b;
   }
   else if(c>a && c>b && c>d)
   {
       return c;
   }
   else
   {
   return d;
   }
} 
int main() 
{   int x,y,z,p;
    cin>>x>>y>>z>>p;
  int max= max_of_four(x,y,z,p); 
  cout<<max; 
    return 0;
}
