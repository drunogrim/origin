#include <iostream>
#define MODE 1

#if !defined MODE
#error "Need definition for MODE"
#endif

using namespace std;

void add() {
    int a = 0, b = 0;
    cout << "input a: "; cin >> a;
    cout << "input b: "; cin >> b;
    cout << "Result: " << a + b;
    cout << endl;
}

int main()
{
#if MODE == 0
    cout << "Working in training mode... " << endl;
#elif MODE == 1
    cout << "Working in battle mode... " << endl;
    add();
#else
    cout << "Unknown mode. Exiting..." << endl;
#endif
    return 0;
}
