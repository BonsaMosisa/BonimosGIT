#include<iostream>
#include<iomanip>
#include<cmath>
using namespace std;
const double PI=3.14;
struct circle
{
  double radius;
  double diameter;
  double area;
};
int main()
{
  circle c;
  cout<<"enter diameter";
  cin>>c.diameter;

  c.radius=c.diameter/2;
  c.area=PI*pow(c.radius,2);

  cout<<fixed<<showpoint<<setprecision(2);
  cout<<"diameter :"<<c.diameter<<endl;
  cout<<"radius   :"<<c.radius<<endl;
  cout<<"area     :"<<c.area<<endl;
  return 0;
}
