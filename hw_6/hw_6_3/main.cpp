#include <iostream>   

#include "figure.h"
#include "triangle.h"
#include "right_triangle.h"
#include "equilateral_triangle.h"
#include "isosceles_triangler.h"
#include "quadraliteral.h"
#include "square.h"
#include "rectangle.h"
#include "parallelogram.h"
#include "rhombus.h"
#include "print_info.h"


using namespace std;

int main()
{
    figure fig;
    print_info(fig);

    triangle Triangle(10, 20, 30, 50, 60, 70);
    print_info(Triangle);

    right_triangle Right_triangle(10, 20, 30, 50, 60, 90);
    print_info(Right_triangle);

    isosceles_triangle Isosceles_triangle(10, 20, 10, 50, 60, 50);
    print_info(Isosceles_triangle);

    equilateral_triangle Equilateral_triangle(30, 30, 30, 60, 60, 60);
    print_info(Equilateral_triangle);

    quadraliteral Quadrilateral(10, 20, 30, 40, 50, 60, 70, 80);
    print_info(Quadrilateral);

    rectangle Rectangle(10, 20, 10, 20, 90, 90, 90, 90);
    //rectangle Rectangle(20, 20, 20, 20, 90, 90, 90, 90);
    print_info(Rectangle);

    square Square(20, 20, 20, 20, 90, 90, 90, 90);
    print_info(Square);

    parallelogram Parallelogram(20, 30, 20, 30, 30, 40, 30, 40);
    print_info(Parallelogram);

    rhombus Rhomb(30, 30, 30, 30, 30, 40, 30, 40);
    print_info(Rhomb);

    return 0;
}
