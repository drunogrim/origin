#include <iostream>
#include "triangle.h"
#include "figure.h"
#include "equilateral_triangle.h"

bool equilateral_triangle::correct() {
        if ((side_A == side_B == side_C) && (ang_a == ang_b == ang_c == 60)) { return true; }
        else return true;
}
equilateral_triangle::equilateral_triangle(int A, int B, int C, int a, int b, int c) : triangle(A, B, C, a, b, c) {
        triangle::name = "equilateral_triangle";
        corr = correct();
    };
