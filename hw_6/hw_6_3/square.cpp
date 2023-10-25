#include "quadraliteral.h"
#include "figure.h"
#include "square.h"

bool square::correct() {
        if ((side_A == side_B == side_C == side_D) && (ang_a == ang_b == ang_c == ang_d == 90)) { return true; }
        else return false;
}
square::square(int A, int B, int C, int D, int a, int b, int c, int d) : quadraliteral(A, B, C, D, a, b, c, d) {
        figure::name = "square";
}
