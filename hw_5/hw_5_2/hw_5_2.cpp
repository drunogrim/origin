#include <iostream>
#include <string>

using namespace std;

class figure {
protected:
    int side_A = 0, side_B = 0, side_C = 0, side_D = 0;
    int ang_a = 0, ang_b = 0, ang_c = 0, ang_d = 0;
    int num_sides = 0;
    string name;
public: 
    int get_side_A(){ return side_A; }
    int get_side_B() { return side_B; }
    int get_side_C() { return side_C; }
    int get_side_D() { return side_D; }
    int get_a() { return ang_a; }
    int get_b() { return ang_b; }
    int get_c() { return ang_c; }
    int get_d() { return ang_d; }
    int get_num_sides() { return num_sides; }
    string get_name() { return name; }
};

class triangle : public figure {
public:
    triangle(int A, int B, int C, int a, int b, int c) {
        name = "triangle";
        num_sides = 3;
        side_A = A;
        side_B = B;
        side_C = C;
        ang_a = a;
        ang_b = b;
        ang_c = c;
    }
};

class right_triangle : public triangle {
public:
    right_triangle(int A, int B, int C, int a, int b) : triangle(A, B, C, a, b, 90) {
        triangle::name = "right_triangle";
    };
};

class equilateral_triangle : public triangle {
public:
    equilateral_triangle(int A) : triangle(A, A, A, 60, 60, 60) {
        triangle::name = "equilateral_triangle";
    };
};

class isosceles_triangle : public triangle {
public:
    isosceles_triangle(int A, int B, int a, int b) : triangle(A, B, A, a, b, a) {
        triangle::name = "isosceles_triangle";
    };
};

class quadraliteral : public figure {
public:
    quadraliteral(int A, int B, int C, int D, int a, int b, int c, int d) {
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
    }
};

class square : public quadraliteral {
public:
    square(int A) : quadraliteral(A, A, A, A, 90, 90, 90, 90) {
        figure::name = "square";
    }
};

class rectangle : public quadraliteral {
public:
    rectangle(int A, int B) : quadraliteral(A, B, A, B, 90, 90, 90, 90) {
        figure::name = "rectangle";
    }
};

class parallelogram : public quadraliteral {
public:
    parallelogram(int A, int B, int a, int b) : quadraliteral(A, B, A, B, a,b,a,b) {
        figure::name = "parallelogram";
    }
};

class rhombus : public quadraliteral {
public:
    rhombus(int A, int a, int b) : quadraliteral(A, A, A, A, a, b, a, b) {
        figure::name = "rhombus";
    }
};

void print_info(figure& f) {
    cout << f.get_name() << ": " << endl;
    if (f.get_num_sides() == 3) {
        cout << "sides: " << "A=" << f.get_side_A() << " " << "B=" << f.get_side_B() << " " << "C=" << f.get_side_C() << endl;
        cout << "angles: " << "a=" << f.get_a() << " " << "b=" << f.get_b() << " " << "c=" << f.get_c() << endl<< endl;
    }
    if (f.get_num_sides() == 4) {
        cout << "sides: " << "A=" << f.get_side_A() << " " << "B=" << f.get_side_B() << " " << "C=" << f.get_side_C() << " " << "D=" << f.get_side_D() << endl;
        cout << "angles: " << "a=" << f.get_a() << " " << "b=" << f.get_b() << " " << "c=" << f.get_c() << " " << "d=" << f.get_d() << endl << endl;
    }
}

int main()
{
    triangle Triangle(10, 20, 30, 50, 60, 70);
    print_info(Triangle);

    right_triangle Right_triangle(10, 20, 30, 50, 60);
    print_info(Right_triangle);

    isosceles_triangle Isosceles_triangle(10, 20, 50, 60);
    print_info(Isosceles_triangle);

    equilateral_triangle Equilateral_triangle(30);
    print_info(Equilateral_triangle);

    quadraliteral Quadrilateral(10, 20, 30, 40, 50, 60, 70, 80);
    print_info(Quadrilateral);

    rectangle Rectangle(10, 20);
    print_info(Rectangle);

    square Square(20);
    print_info(Square);

    parallelogram Parallelogram(20, 30, 30, 40);
    print_info(Parallelogram);

    rhombus Rhomb(30, 30, 40);
    print_info(Rhomb);
    
    return 0;
}
