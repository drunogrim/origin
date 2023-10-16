#include <iostream>
#include <string>

using namespace std;

class figure {
protected:
    unsigned int sides_count = 0;
 public: 
     figure() { sides_count = 0; };
     figure(int a) { set_sides_count(a); }
     bool set_sides_count(int a)
         {
             if (a <= 0) return false;
             sides_count = static_cast<unsigned int>(a);
             return true;
         }
     unsigned int get_sides_count() { return sides_count; }
};

class triangle :  public figure {
public:
    triangle() : figure(3) {};
};

class quadrangle : public figure {
public:
    quadrangle() { set_sides_count(4); }
};

int main()
{
    figure fig1;
    triangle fig2;
    quadrangle fig3;
    std::cout << "Count sides:" << std::endl
                   << "Figure: " << fig1.get_sides_count() << std::endl
                   << "Triangle: " << fig2.get_sides_count() << std::endl
                   << "Quadrangle: " << fig3.get_sides_count() << std::endl;


    return 0;
}
