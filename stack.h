//Declaration of Stack class
#include <iostream>
#include <vector>

#ifndef STACK
#define STACK

using namespace std;

class Stack {

 public:
  Stack();
  void push(flt);
  float pop();

 private:
  vector<float> objs;
};
#endif
