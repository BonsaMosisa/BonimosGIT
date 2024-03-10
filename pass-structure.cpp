#include <iostream>
using namespace std;
struct Employee
{
  int id;
  char Name[25];
  int age;
  double salary;
};

void Display(struct Employee);

int main()
{
  Employee e = {1, "Borif", 256000};
  Display(e); // structure is pass by value
}
void Display(Employee E)
{
  cout << "\n Employee ID   :" << E.id;
  cout << "\n Employee Name :" << E.Name;
  cout << "\n Employee Age  :" << E.age;
  cout << "\n Employee ID   :" << E.salary;
}