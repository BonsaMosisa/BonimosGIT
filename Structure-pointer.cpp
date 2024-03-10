/*#include <iostream>
using namespace std;
void display(int[], int);
int main()
{
  int num[4] = {56, 22, 7, 9};
  int si = sizeof(num) / sizeof(num[0]);
  display(num, si);
  return 0;
}
void display(int arr[], int si)
{
  for (int i = 0; i < si; i++)
    cout << arr[i] << " ,";
}*/
#include <iostream>
using namespace std;
void add2(int[], int);

int main()
{
  int arr[4] = {2, 23, 4, 9};
  int si = sizeof(arr) / sizeof(arr[0]);
  add2(arr, si);
  return 0;
}
void add2(int a[], int si)
{
  for (int i = 0; i < si; i++)
    a[i] += 2;
  for (int i = 0; i < si; i++)
    cout << a[i] << "  ";
}