#include <iostream>
#include "figure.h"
#include "triangle.h"

    bool triangle::correct() {
        if (((side_A + side_B > side_C) || (side_B + side_C > side_A) || (side_A + side_C > side_B)) && (ang_a + ang_b + ang_c == 180)) { return true; }
        else return false;
    }
    triangle::triangle(int A, int B, int C, int a, int b, int c) {
        name = "triangle";
        num_sides = 3;
        side_A = A;
        side_B = B;
        side_C = C;
        ang_a = a;
        ang_b = b;
        ang_c = c;
        if (correct() == 0) { correctness = "not right"; }
    }
