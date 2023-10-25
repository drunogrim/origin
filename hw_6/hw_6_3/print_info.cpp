#include <iostream>
#include "figure.h"
#include "print_info.h"

using namespace std;

void print_info(figure& f) {
    cout << f.get_name() << ": " << endl;
    if (f.get_num_sides() == 3) {
        cout << "number of sides: " << f.get_num_sides() << endl;
        cout << "correctness: " << f.get_correctness() << endl;
        cout << "sides: " << "A=" << f.get_side_A() << " " << "B=" << f.get_side_B() << " " << "C=" << f.get_side_C() << endl;
        cout << "angles: " << "a=" << f.get_a() << " " << "b=" << f.get_b() << " " << "c=" << f.get_c() << endl << endl;
    }
    else
        if (f.get_num_sides() == 4) {
            cout << "number of sides: " << f.get_num_sides() << endl;
            cout << "correctness: " << f.get_correctness() << endl;
            cout << "sides: " << "A=" << f.get_side_A() << " " << "B=" << f.get_side_B() << " " << "C=" << f.get_side_C() << " " << "D=" << f.get_side_D() << endl;
            cout << "angles: " << "a=" << f.get_a() << " " << "b=" << f.get_b() << " " << "c=" << f.get_c() << " " << "d=" << f.get_d() << endl << endl;
        }
        else if (f.get_num_sides() < 3) {
            cout << "number of sides: " << f.get_num_sides() << endl;
            cout << "correctness: " << f.get_correctness() << endl << endl;
        }
}