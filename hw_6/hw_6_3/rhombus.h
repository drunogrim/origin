#pragma once
#include "quadraliteral.h"

class rhombus : public quadraliteral {
protected:
    bool correct()override;
public:
    rhombus(int A, int B, int C, int D, int a, int b, int c, int d);
};