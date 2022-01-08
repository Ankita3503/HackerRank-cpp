#include <iostream>
#include <iomanip>
using namespace std;

int main()
{ 
    int a;
    long int b;
    char c;
    float d;
    double e; 
    cin>>a;
    cin>>b;
    cin>>c;
    cin>>d;
    cin>>e;
    cout<<a<<"\n";
    cout<<b<<"\n";
    cout<<fixed<<setprecision(3)<<c<<"\n";
    cout<<d<<"\n";
    cout<<fixed<<setprecision(9)<<e;
    return 0;
}
