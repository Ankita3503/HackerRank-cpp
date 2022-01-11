#include<iostream>
using namespace std;
class a
{
  public:
  void equilateral()
  {
      cout<<"I am an equilateral triangle\n";
  }  
};
class b:public a
{
   public:
   void isosceles()
   {
       cout<<"I am an isosceles triangle\n";
   }   
};
class c:public b
{
    public:
    void triangle()
    {
       cout<<"I am a triangle"; 
    }
};
int main()
{
    c ob;
    ob.equilateral();
    ob.isosceles();
    ob.triangle();
    return 0;
}
