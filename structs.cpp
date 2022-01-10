#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

struct student
{
  int age;
  char  first_name[100];
  char last_name[100];
  int std;
};
int main() 
{
    student st;
    cin >> st.age >> st.first_name >> st.last_name >> st.std;
    cout << st.age << " " << st.first_name << " " << st.last_name << " " << st.std;
    return 0;
}
