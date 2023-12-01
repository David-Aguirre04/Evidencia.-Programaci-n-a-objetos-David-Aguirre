//
// Created by David Aguirre on 24/11/23.
//

#ifndef TRIANGULO_TRIANGLE_H
#define TRIANGULO_TRIANGLE_H
#include "Point.h"
#include "vector"


class Triangle {
private:
    Point v1;
    Point v2;
    Point v3;
    vector<Triangle*>Tri;

public:
    Triangle();
    Triangle(Point _v1, Point _v2, Point _v3);
    double perimetro();
    double area();
    void obt_info(Triangle*T);


};

#endif //TRIANGULO_TRIANGLE_H
