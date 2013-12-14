//Declaration of Stack class
#include <iostream>
#include <vector>
#include <string>

#ifndef STACK
#define STACK

using namespace std;

class Stack {

 public:
  Stack();
  void push(float);
  float pop();
  float peak();
  string getBack();
  void clear();

 private:
  vector<float> objs;
};
#endif
