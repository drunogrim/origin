#pragma once
class Counter {
private:
	int num;
public:
	void counter_up();
	void counter_down();
	void counter_print();
	Counter();
	Counter(int start_int);
};