#pragma once
#include "figure.h"
class triangle : public figure {
protected:
    bool correct() override;
public:
    triangle(int A, int B, int C, int a, int b, int c);
};