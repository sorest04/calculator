
#include <cstdlib>
#include <cstdio>
#include <FL/Fl.H>
#include <FL/Fl_Window.H>
#include <FL/Fl_Box.H>
#include <FL/Fl_Button.H>
#include <FL/fl_ask.H>
#include <string>
#include <math.h>
#include "stack.h"

using namespace std;

Fl_Box *box;

string glblStr="";
float glblFlt=0.0;
Stack s;
bool isFlt=false;
int decCount=0;
float res,fir,sec;


void b1cb(Fl_Widget *w, void *) {
  glblStr+="1";
  box->copy_label(glblStr.c_str());
  if(isFlt){
    decCount++;
    glblFlt+= 1/(pow(10,decCount));
  }
  else{
    glblFlt = glblFlt*10+1;
  }
}
void b2cb(Fl_Widget *w, void *) {
  glblStr+="2";
  box->copy_label(glblStr.c_str());
  if(isFlt){
    decCount++;
    glblFlt+= 2/(pow(10,decCount));
  }
  else{
    glblFlt = glblFlt*10+2;
  }
}
void b3cb(Fl_Widget *w, void *) {
  glblStr+="3";
  box->copy_label(glblStr.c_str());
  if(isFlt){
    decCount++;
    glblFlt+= 3/(pow(10,decCount));
  }
  else{
    glblFlt = glblFlt*10+3;
  }
}
  
void b4cb(Fl_Widget *w, void *) {
 glblStr+="4";
  box->copy_label(glblStr.c_str());
  if(isFlt){
    decCount++;
    glblFlt+= 4/(pow(10,decCount));
  }
  else{
    glblFlt = glblFlt*10+4;
  }
}
void b5cb(Fl_Widget *w, void *) {
  glblStr+="5";
  box->copy_label(glblStr.c_str());
  if(isFlt){
    decCount++;
    glblFlt+= 5/(pow(10,decCount));
  }
  else{
    glblFlt = glblFlt*10+5;
  }
}
void b6cb(Fl_Widget *w, void *) {
  glblStr+="6";
  box->copy_label(glblStr.c_str());
  if(isFlt){
    decCount++;
    glblFlt+= 6/(pow(10,decCount));
  }
  else{
    glblFlt = glblFlt*10+6;
  }
}
void b7cb(Fl_Widget *w, void *) {
  glblStr+="7";
  box->copy_label(glblStr.c_str());
  if(isFlt){
    decCount++;
    glblFlt+= 7/(pow(10,decCount));
  }
  else{
    glblFlt = glblFlt*10+7;
  }
}
void b8cb(Fl_Widget *w, void *) {
  glblStr+="8";
  box->copy_label(glblStr.c_str());
  if(isFlt){
    decCount++;
    glblFlt+= 8/(pow(10,decCount));
  }
  else{
    glblFlt = glblFlt*10+8;
  }
}
void b9cb(Fl_Widget *w, void *) {
 glblStr+="9";
  box->copy_label(glblStr.c_str());
  if(isFlt){
    decCount++;
    glblFlt+= 9/(pow(10,decCount));
  }
  else{
    glblFlt = glblFlt*10+9;
  }
}
void b0cb(Fl_Widget *w, void *) {
  glblStr+="0";
  box->copy_label(glblStr.c_str());
  if(isFlt){
    decCount++;
  }
  else{
    glblFlt = glblFlt*10;
  }
}
void bsqrtcb(Fl_Widget *w, void *) {
  w->copy_label("check");
}
void bexpcb(Fl_Widget *w, void *) {
  w->copy_label("check");
}
void brescb(Fl_Widget *w, void *) {
  w->copy_label("check");
}
void bpluscb(Fl_Widget *w, void *) {
  res=0;
  sec=s.pop();
  fir=s.pop();
  res = fir + sec;
  box->copy_label(to_string(res).c_str());
  s.push(res);
  decCount = 0;
  isFlt = false;
}
void bmincb(Fl_Widget *w, void *) {
  w->copy_label("check");
}
void bmulcb(Fl_Widget *w, void *) {
  w->copy_label("check");
}
void bdivcb(Fl_Widget *w, void *) {
  w->copy_label("check");
}
void bentrcb(Fl_Widget *w, void *) {
  s.push(glblFlt);
  decCount = 0;
  isFlt = false;  
}
void bdpcb(Fl_Widget *w, void *) {
  w->copy_label("check");
}
void bpmcb(Fl_Widget *w, void *) {
  w->copy_label("check");
}



int main(int argc, char ** argv) {
  Fl_Window *window = new Fl_Window(420,660);
  box = new Fl_Box(10,25,400,100,".0");
  box->box(FL_DOWN_BOX);
  box->labelsize(36);
  Fl_Button *b1 = new Fl_Button(10, 250, 100, 100, "1");
  b1->callback(b1cb,0);
  Fl_Button *b2 = new Fl_Button(110, 250, 100, 100, "2");
  b2->callback(b2cb,0);
  Fl_Button *b3 = new Fl_Button(210, 250, 100, 100, "3");
  b3->callback(b3cb,0);
  Fl_Button *b4 = new Fl_Button(10, 350, 100, 100, "4");
  b4->callback(b4cb,0);
  Fl_Button *b5 = new Fl_Button(110, 350, 100, 100, "5");
  b5->callback(b5cb,0);
  Fl_Button *b6 = new Fl_Button(210, 350, 100, 100, "6");
  b6->callback(b6cb,0);
  Fl_Button *b7 = new Fl_Button(10, 450, 100, 100, "7");
  b7->callback(b7cb,0);
  Fl_Button *b8 = new Fl_Button(110, 450, 100, 100, "8");
  b8->callback(b8cb,0);
  Fl_Button *b9 = new Fl_Button(210, 450, 100, 100, "9");
  b9->callback(b9cb,0);
  Fl_Button *b0 = new Fl_Button(10, 550, 100, 100, "0");
  b0->callback(b0cb,0);
  Fl_Button *bsqrt = new Fl_Button(10, 150, 100, 100, "sqrt");
  bsqrt->callback(bsqrtcb,0);
  Fl_Button *bexp = new Fl_Button(110, 150, 100, 100, "exp");
  bexp->callback(bexpcb,0);
  Fl_Button *bres = new Fl_Button(210, 150, 100, 100, "reset");
  bres->callback(brescb,0);
  Fl_Button *bplus = new Fl_Button(310, 150, 100, 100, "+");
  bplus->callback(bpluscb,0);
  Fl_Button *bmin = new Fl_Button(310, 250, 100, 100, "-");
  bmin->callback(bmincb,0);
  Fl_Button *bmul = new Fl_Button(310, 350, 100, 100, "X");
  bmul->callback(bmulcb,0);
  Fl_Button *bdiv = new Fl_Button(310, 450, 100, 100, "/");
  bdiv->callback(bdivcb,0);
  Fl_Button *bentr = new Fl_Button(310, 550, 100, 100, "enter");
  bentr->callback(bentrcb,0);
  Fl_Button *bdp = new Fl_Button(210, 550, 100, 100, "drop");
  bdp->callback(bdpcb,0);
  Fl_Button *bpm = new Fl_Button(110, 550, 100, 100, "+/-");
  bpm->callback(bpmcb,0);
  window->end();
  window->show(argc,argv);
  return Fl::run();
}
