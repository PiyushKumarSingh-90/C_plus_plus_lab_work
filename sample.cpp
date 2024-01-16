#include <iostream>
using namespace std;

class Shape
{
public:
   int width;
   int hight;
   int sum;

   void setData()
   {
      cout << "enter no. : ";
      cin >> width;

      cout << "enter no. : ";
      cin >> hight;
   }
};

class Rectangle : public Shape

{
public:
   int getArea()
   {
      return (width * hight);
   }
};

int main()
{
   Rectangle aot;
   aot.setData();
   aot.getArea();

   cout << "total area : " << aot.getArea() << "\n";

   return 0;
}
