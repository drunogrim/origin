#pragma once
#include "quadraliteral.h"

class square : public quadraliteral {
protected:
    bool correct();
public:
    square(int A, int B, int C, int D, int a, int b, int c, int d);
};