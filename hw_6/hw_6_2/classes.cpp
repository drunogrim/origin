#include <iostream>
#include "classes.h"
using namespace std;

void Counter::counter_up() {num++;}
void Counter::counter_down() { num--; }
void Counter::counter_print() { cout << "Counter: " << num << endl; }
Counter::Counter() { num = 0; };
Counter::Counter(int start_int) { num = start_int; }
