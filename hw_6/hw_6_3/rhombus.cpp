#include "figure.h"
#include "quadraliteral.h"
#include "rhombus.h"

    bool rhombus::correct() {
        if ((side_A == side_C == side_B == side_D) && (ang_a == ang_c && ang_b == ang_d) && (ang_a + ang_b + ang_c + ang_d == 360)) { return 1; }
        else return 0;
    }
    rhombus::rhombus(int A, int B, int C, int D, int a, int b, int c, int d) : quadraliteral(A, B, C, D, a, b, c, d) {
        figure::name = "rhombus";
        corr = correct();
    }