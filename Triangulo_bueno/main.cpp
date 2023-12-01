#include <iostream>
using namespace std;
#include "Point.h"
#include "Triangle.h"
#include "vector"

int main() {
   Point p1;
   p1.setX(0);
   p1.setY(0);
   Point p2;
   p2.setX(50);
   p2.setY(30);
   Point p3;
   p3.setX(25);
   p3.setY(10);

   Triangle t1;
   double p = t1.perimetro();
   cout << "El perimetro del triángulo es "<< p << "\n";
   double a = t1.area();
   cout << "El área de tu triángulo es "<< a;

}
