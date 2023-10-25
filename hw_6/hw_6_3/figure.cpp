#include <iostream>
#include "figure.h"

    int figure::get_side_A() { return side_A; }
    int figure::get_side_B() { return side_B; }
    int figure::get_side_C() { return side_C; }
    int figure::get_side_D() { return side_D; }
    int figure::get_a() { return ang_a; }
    int figure::get_b() { return ang_b; }
    int figure::get_c() { return ang_c; }
    int figure::get_d() { return ang_d; }
    int figure::get_num_sides() { return num_sides; }
    string figure::get_correctness() {
        if (corr == true) {
            correctness = "right";
        }
        else { correctness = "not right"; }
        return correctness;
    }
    string figure::get_name() { return name; }
