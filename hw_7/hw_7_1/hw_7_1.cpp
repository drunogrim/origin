#include <iostream>
#define MODE 2

using namespace std;

void add() {
 #if MODE == 0
    cout << "Working in training mode... " << endl;
#elif MODE == 1
        int a = 0, b = 0;
        cout << "input a: "; cin >> a;
        cout << "input b: "; cin >> b;
        cout << "Result: " <<  a + b;
        cout << endl;
#else
    cout << "Unknown mode. Exiting..." << endl;
#endif
}

int main()
{
    add();
    return 0;
}
