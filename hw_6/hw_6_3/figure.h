#pragma once
#include <string>
using namespace std;

class figure {
protected:
    int side_A = 0, side_B = 0, side_C = 0, side_D = 0;
    int ang_a = 0, ang_b = 0, ang_c = 0, ang_d = 0;
    int num_sides = 0;
    string name = "figure";
    string correctness;
    virtual bool correct() {
        if (num_sides == 0) {
            return true;
        }
        else return false;
    }
    bool corr = true;
public:
    int get_side_A();
    int get_side_B();
    int get_side_C();
    int get_side_D();
    int get_a();
    int get_b();
    int get_c();
    int get_d();
    int get_num_sides();
    string get_correctness();
    string get_name();
};