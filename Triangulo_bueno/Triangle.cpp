//
// Created by David Aguirre on 24/11/23.
//

#include "Triangle.h"
#include "Point.h"
#include "cmath"

Point obj;

Triangle::Triangle() {
    v1 = Point(0,0);
    v2 = Point(50, 30);
    v3 = Point(25, 10);
}

Triangle::Triangle(Point _v1, Point _v2, Point _v3){
    v1 = _v1;
    v2 = _v2;
    v3 = _v3;
}

double Triangle::perimetro() {
    double dist1;
    double dist2;
    double dist3;
    dist1 = obj.calcdistancia(v1,  v2);
    dist2 = obj.calcdistancia( v2,  v3);
    dist3 = obj.calcdistancia( v3,  v1);
    return dist1+dist2+dist3;
}

double Triangle::area(){
    double dist1;
    double dist2;
    double dist3;
    dist1 = obj.calcdistancia(v1,  v2);
    dist2 = obj.calcdistancia( v2,  v3);
    dist3 = obj.calcdistancia( v3,  v1);
    double s = (dist1+dist2+dist3)/2;
    double areatotal = sqrt(s*(s-dist1)*(s-dist2)*(s-dist3));
    return areatotal;

}

void Triangle::obt_info(Triangle*T){
    Tri.push_back(T);

}