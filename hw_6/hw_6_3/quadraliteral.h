#pragma once
#include "figure.h"

class quadraliteral : public figure {
protected:
    bool correct() override;
public:
    quadraliteral(int A, int B, int C, int D, int a, int b, int c, int d);
};
