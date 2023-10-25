#pragma once
#include "quadraliteral.h"

class parallelogram : public quadraliteral {
protected:
    bool correct() override;
public:
    parallelogram(int A, int B, int C, int D, int a, int b, int c, int d);
};