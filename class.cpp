#include <iostream>
#include <sstream>
using namespace std;
class student
{
  public:
  int age;
  char first_name[100];
  char last_name[100];
  int st;
  void details()
  {
      cin>>age;
      cin>>first_name;
      cin>>last_name;;
      cin>>st;
  }  
  void display()
  {
      cout<<age<<"\n";
      cout<<last_name<<","<<" "<<first_name<<"\n";
      cout<<st<<"\n"<<"\n";
      
      cout<<age<<","<<first_name<<","<<last_name<<","<<st;  
  }
};

int main() 
{
    student ob;
    ob.details();
    ob.display();
    return 0;
}
