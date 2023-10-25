#pragma once
#include "figure.h"
#include "triangle.h"

class right_triangle : public triangle {
protected:
    bool correct() override;
public:
    right_triangle(int A, int B, int C, int a, int b, int c);
};