#include <iostream>
using namespace std;

class Rectangle
{
private:

  int length;
  int breadth;
public:
  void setlength(int l)
  {
    length=l;
  }
  void setbreadth(int b)
  {
    breadth=b;
  }
  int getlength()
  {
    return length;
  }
  int getbreadth ()
  {
    return breadth;
  }
  
  int area()
  {
    return length*breadth;
  }
  int perimeter ()
  {
    return 2*length+2*breadth;
  }
};



int main()
{
  Rectangle r1;
	r1.setlength(10);
	r1.setbreadth(5);
 	cout<<r1.area()<<endl;
	cout<<r1.perimeter()<<endl;
	cout<<r1.getlength()<<endl;
}
