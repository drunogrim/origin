#include <iostream>
#include "figure.h"
#include "triangle.h"
#include "right_triangle.h"

    bool right_triangle::correct() {
        if (((side_A * side_A + side_B * side_B > side_C * side_C) && ang_c == 90 || (side_A * side_A + side_C * side_C > side_B * side_B) && ang_b == 90 || (side_B * side_B + side_C * side_C > side_A * side_A) && ang_a == 90) && (ang_a + ang_b + ang_c == 180)) { return true; }
        else return false;
    }
    right_triangle::right_triangle(int A, int B, int C, int a, int b, int c) : triangle(A, B, C, a, b, c) {
        triangle::name = "right_triangle";
        corr = correct();
    }
