#pragma once
#include "triangle.h"

class equilateral_triangle : public triangle {
protected:
    bool correct()override;
public:
    equilateral_triangle(int A, int B, int C, int a, int b, int c);
};