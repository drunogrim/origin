#include <iostream>
#include <string>

using namespace std;

class figure {
protected:
    int num_sides = 0;
    string name = "figure";
    string correctness;
    virtual bool correct() {
        if (num_sides == 0) {
            return true;
        }
        else return false;
    }
public:
    int get_num_sides() { return num_sides; }
    string get_correctness() {
       if (correct()) {
            return correctness = "right";
        } else { return correctness = "not right"; }
    }
    string get_name() { return name; }
    virtual void print() {
        cout << get_name() << endl;
        cout << "coorectness: " << get_correctness() << endl;
        cout << "sides: " << get_num_sides() << endl << endl;
    }
};

class triangle : public figure {
protected:
    int side_A = 0, side_B = 0, side_C = 0;
    int ang_a = 0, ang_b = 0, ang_c = 0;
    bool correct() override {
        if (((side_A + side_B > side_C) || (side_B + side_C > side_A) || (side_A + side_C > side_B)) && (ang_a + ang_b + ang_c == 180)) { return true; }
        else return false;
    }
    virtual bool check() { return 1; }
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
        if (!(correct()==1 && check() == 1)) { correctness = "not right"; }
    }
    int get_side_A() { return side_A; }
    int get_side_B() { return side_B; }
    int get_side_C() { return side_C; }
    int get_a() { return ang_a; }
    int get_b() { return ang_b; }
    int get_c() { return ang_c; }
    void print() {
        cout << get_name() << endl;
        cout << "coorectness: " << get_correctness() << endl;
        cout << "sides: " << "A=" << get_side_A() << " " << "B=" << get_side_B() << " " << "C=" << get_side_C() << endl;
        cout << "angles: " << "a=" << get_a() << " " << "b=" << get_b() << " " << "c=" << get_c() << endl << endl;
    }
};

class right_triangle : public triangle {
public:
    right_triangle(int A, int B, int C, int a, int b, int c) : triangle(A, B, C, a, b, c) {
        triangle::name = "right_triangle";
    }
    bool check() {
        if (((side_A * side_A + side_B * side_B > side_C * side_C) && ang_c == 90 || (side_A * side_A + side_C * side_C > side_B * side_B) && ang_b == 90 || (side_B * side_B + side_C * side_C > side_A * side_A) && ang_a == 90) && (ang_a + ang_b + ang_c == 180)) { return true; }
        else return false;
    }
};

class equilateral_triangle : public triangle {
public:
    equilateral_triangle(int A, int B, int C, int a, int b, int c) : triangle(A, B, C, a, b, c) {
        triangle::name = "equilateral_triangle";
    };
    bool check()override {
        if ((side_A == side_B == side_C) && (ang_a == ang_b == ang_c == 60)) { return true; }
        else return true;
    }
};

class isosceles_triangle : public triangle {
public:
    isosceles_triangle(int A, int B, int C, int a, int b, int c) : triangle(A, B, C, a, b, c) {
        triangle::name = "isosceles_triangle";
    };
    bool check() override {
        if (((side_A == side_B && ang_a == ang_c) || (side_C == side_B && ang_b == ang_c) || (side_A == side_C && ang_a == ang_c)) && (ang_a + ang_b + ang_c == 180)) { return 1; }
        else return 0;
    }
};

class quadraliteral : public figure {
protected:
    int side_A = 0, side_B = 0, side_C = 0, side_D = 0;
    int ang_a = 0, ang_b = 0, ang_c = 0, ang_d = 0;
    bool correct() override {
        if (((side_A * side_A + side_B * side_B) == (side_C * side_C + side_D * side_D)) && (ang_a + ang_b + ang_c + ang_d == 360)) { return true; }
        else return false;
    }
    virtual bool check() { return 1; }
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
        if (!(correct() == 1 && check() == 1)) { correctness = "not right"; }
    }
    int get_side_A() { return side_A; }
    int get_side_B() { return side_B; }
    int get_side_C() { return side_C; }
    int get_side_D() { return side_D; }
    int get_a() { return ang_a; }
    int get_b() { return ang_b; }
    int get_c() { return ang_c; }
    int get_d() { return ang_d; }
    void print() {
        cout << get_name() << endl;
        cout << "coorectness: " << get_correctness() << endl;
        cout << "sides: " << "A=" << get_side_A() << " " << "B=" << get_side_B() << " " << "C=" << get_side_C() << " " << "D=" << get_side_D() << endl;
        cout << "angles: " << "a=" << get_a() << " " << "b=" << get_b() << " " << "c=" << get_c() << " " << "d=" << get_d() << endl << endl;
    }
};

class square : public quadraliteral {
public:
    square(int A, int B, int C, int D, int a, int b, int c, int d) : quadraliteral(A, B, C, D, a, b, c, d) {
        figure::name = "square";
    }
    bool check() {
        if ((side_A == side_B == side_C == side_D) && (ang_a == ang_b == ang_c == ang_d == 90)) { return true; }
        else return false;
    }
};

class rectangle : public quadraliteral {
public:
    rectangle(int A, int B, int C, int D, int a, int b, int c, int d) : quadraliteral(A, B, C, D, a, b, c, d) {
        figure::name = "rectangle";
    }
    bool check() override {
        if (((side_A == side_C) && (side_A != side_B) && (side_B == side_D)) && (ang_a == ang_b == ang_c == ang_d == 90)) { return true; }
        else return false;
    }
};

class parallelogram : public quadraliteral {
public:
    parallelogram(int A, int B, int C, int D, int a, int b, int c, int d) : quadraliteral(A, B, C, D, a, b, c, d) {
        figure::name = "parallelogram";
    }
    bool check() override {
        if ((side_A == side_C && side_B == side_D) && (ang_a == ang_c && ang_b == ang_d) && (ang_a + ang_b + ang_c + ang_d == 360)) { return 1; }
        else return 0;
    }
};

class rhombus : public quadraliteral {
public:
    rhombus(int A, int B, int C, int D, int a, int b, int c, int d) : quadraliteral(A, B, C, D, a, b, c, d) {
        figure::name = "rhombus";
    }
    bool check()override {
        if ((side_A == side_C == side_B == side_D) && (ang_a == ang_c && ang_b == ang_d) && (ang_a + ang_b + ang_c + ang_d == 360)) { return 1; }
        else return 0;
    }
};

void print_info(figure& f) {
    f.print();
}

int main()
{
    figure fig;
    print_info(fig);

    triangle Triangle(10, 20, 30, 50, 60, 70);
    print_info(Triangle);

    right_triangle Right_triangle(10, 20, 30, 50, 60, 90);
    print_info(Right_triangle);

    isosceles_triangle Isosceles_triangle(10, 20, 10, 50, 60, 50);
    print_info(Isosceles_triangle);

    equilateral_triangle Equilateral_triangle(30, 30, 30, 60, 60, 60);
    print_info(Equilateral_triangle);

    quadraliteral Quadrilateral(10, 20, 30, 40, 50, 60, 70, 80);
    print_info(Quadrilateral);

    rectangle Rectangle(10, 20, 10, 20, 90, 90, 90, 90);
    print_info(Rectangle);

    square Square(20, 20, 20, 20, 90, 90, 90, 90);
    print_info(Square);

    parallelogram Parallelogram(20, 30, 20, 30, 30, 40, 30, 40);
    print_info(Parallelogram);

    rhombus Rhomb(30, 30, 30, 30, 30, 40, 30, 40);
    print_info(Rhomb);

    return 0;
}
