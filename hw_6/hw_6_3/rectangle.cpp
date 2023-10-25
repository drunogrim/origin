#include "figure.h"
#include "quadraliteral.h"
#include "rectangle.h"

    bool rectangle::correct() {
        if ((side_A == side_C && side_A != side_B && side_B == side_D) && (ang_a == ang_b == ang_c == ang_d == 90)) { return true; }
        else return false;
    }
    rectangle::rectangle(int A, int B, int C, int D, int a, int b, int c, int d) : quadraliteral(A, B, C, D, a, b, c, d) {
        figure::name = "rectangle";
        corr = correct();
    }
