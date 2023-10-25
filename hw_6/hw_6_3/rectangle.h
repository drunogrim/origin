#pragma once
#include "quadraliteral.h"

class rectangle : public quadraliteral {
protected:
    bool correct() override;
public:
    rectangle(int A, int B, int C, int D, int a, int b, int c, int d);
};