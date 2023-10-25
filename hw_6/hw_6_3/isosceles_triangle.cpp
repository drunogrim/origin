#include "figure.h"
#include "triangle.h"
#include "isosceles_triangler.h"

    bool isosceles_triangle::correct() {
        if (((side_A == side_B && ang_a == ang_c) || (side_C == side_B && ang_b == ang_c) || (side_A == side_C && ang_a == ang_c)) && (ang_a + ang_b + ang_c == 180)) { return 1; }
        else return 0;
    }
    isosceles_triangle::isosceles_triangle(int A, int B, int C, int a, int b, int c) : triangle(A, B, C, a, b, c) {
        triangle::name = "isosceles_triangle";
        corr = correct();
    };
