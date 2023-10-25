#include "figure.h"
#include "quadraliteral.h"


bool quadraliteral::correct() {
        if (((side_A * side_A + side_B * side_B) == (side_C * side_C + side_D * side_D)) && (ang_a + ang_b + ang_c + ang_d == 360)) { return true; }
        else return false;
    }
quadraliteral::quadraliteral(int A, int B, int C, int D, int a, int b, int c, int d) {
        name = "quadraliteral";
        num_sides = 4;
        side_A = A;
        side_B = B;
        side_C = C;
        side_D = D;
        ang_a = a;
        ang_b = b;
        ang_c = c;
        ang_d = d;
        corr = correct();
    }
