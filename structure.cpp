#include <iostream>
using namespace std;

struct Employee
{
  int id;
  char name[25];
  int age;
  long salary;
};

void Display(struct Employee *);

int main()
{
  Employee e1 = {2, "Bona", 20, 7000};
  Display(&e1);
}

void display(Employee *E)
{
  cout << "\n Employee ID:" << E->id;
  cout << "\n Employee Name:" << E->name;
  cout << "\n Employee Age:" << E->age;
  cout << "\n Employee Salary:" << E->salary;
}