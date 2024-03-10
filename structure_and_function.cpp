#include <iostream>
using namespace std;
struct rectangle
{
  double lenght;
  double width;
  double area;
};
double multiply(double, double);
void showrectangle(rectangle);
// rectangle getctangle();

int main()
{
  rectangle box1;
  box1.lenght = 12.5;
  box1.width = 16.23;
  box1.area = multiply(box1.lenght, box1.width);

  showrectangle(box1);
  // rectangel box2 = getrectangle();
  return 0;
}
//.............................................................................
double multiply(double len, double wid)
{
  return len * wid;
}
//-----------------------------------------------------------------------------
void showrectangle(rectangle r)
{
  cout << "length :" << r.lenght << endl;
  cout << "width  :" << r.width << endl;
  cout << "area   :" << r.area << endl;
}
/*rectangle getrectangle(){
  rectangle r;
  r.length
}*/