#include "stack.h"
#include <vector>
#include <string>
#include <iostream>

Stack::Stack() {

}

void Stack::push(float flt) {
 this->objs.push_back(flt);
}

float Stack::pop() {
  float flt = objs.back();
  objs.pop_back();
  return flt;
}

/*
void Stack::getString() {
  string s;
  for(int x=0;x<objs.size();x++){
    s+=to_string(objs[x]);
    s+=" ";
  }
  return s;
  } */
