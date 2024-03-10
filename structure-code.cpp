// array of structure
#include <iostream>
#include <iomanip>
using namespace std;
struct student
{
  int stid;
  char name[20];
  int age;
  char sex;
  double gpa;
};

int main()
{
  student students[3];
  for (int i = 0; i < 3; i++)
  {
    cout << "-------------------------student " << i + 1 << "-----------------------------------" << endl;
    cout << "enter student ID   :";
    cin >> students[i].stid;

    cout << "enter student name :";
    cin >> students[i].name;
    cout << "enter student age  :";
    cin >> students[i].age;

    cout << "enter student sex  :";
    cin >> students[i].sex;

    cout << "enter student gpa  :";
    cin >> students[i].gpa;
  }
  cout << "\n"
       << setw(10) << "ID" << setw(10) << "Name" << setw(10) << "Age" << setw(10) << "sex" << setw(10) << "cgpa" << endl;
  for (int i = 0; i < 3; i++)
  {
    cout << setw(10) << students[i].stid << students[i].name << setw(10) << students[i].age << setw(10) << students[i].sex << setw(10) << students[i].gpa << endl;
  }

  return 0;
}
