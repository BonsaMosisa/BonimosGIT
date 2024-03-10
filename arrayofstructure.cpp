#include <iostream>
#include <string>
using namespace std;
struct Person
{
  string name;
  int age;
};

int main()
{
  const int ARRAY_SIZE = 3;
  Person people[ARRAY_SIZE] = {
      {"Alice", 25},
      {"Bob", 30},
      {"Charlie", 35}};

  // Accessing and printing elements
  for (int i = 0; i < ARRAY_SIZE; ++i)
  {
    cout << "Name: " << people[i].name << ", Age: " << people[i].age << endl;
  }

  // Modifying an element
  people[1].age = 32;
  cout << "Modified age of Bob: " << people[1].age << endl;

  return 0;
}
