#include "Class.h"


Counter::Counter() { count = 1; }
Counter::Counter(int a) { this->count = a; }
//methods
void Counter::up() { ++count; }
void Counter::dawn() { --count; }
int Counter::print() { return count; }