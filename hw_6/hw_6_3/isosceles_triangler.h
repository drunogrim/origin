#pragma once
#include "triangle.h"

class isosceles_triangle : public triangle {
protected:
    bool correct() override;
public:
    isosceles_triangle(int A, int B, int C, int a, int b, int c);
};
