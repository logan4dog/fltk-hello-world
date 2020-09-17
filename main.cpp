#include <FL/Fl.H>
#include <FL/Fl_Window.H>
#include <FL/Fl_Text_Display.H>
#include <FL/Fl_Input.H>
#include "MyFl_Window.h"
#include <string>
#include "my_titleClass.h"

using namespace std;


int main (int argc, char ** argv)
{
   my_titleClass *mtc = new my_titleClass();
   string sk = mtc->makeTitle();
   char mt[sk.length()+1];
   int i;
   for (i=0;i<sizeof(mt);i++)
   {
      mt[i] = sk[i];
   }
   mt[sk.length()+1] =  0;
  //Fl_Window(int w, int h, const char *title = 0)
  // win is Fl_Window pointer
  MyFl_Window* win = new MyFl_Window(840,400,mt);
  // No matching function for below Fl_Window()
  //Fl_Window *win = new Fl_Window;
  //win->begin();
  //Fl_Text_Display* td = new Fl_Text_Display(120,50,600,300);
  //Fl_Input* ti = new Fl_Input(120,360,600,30);
  //win->end();
  win->show();
  Fl::run();
  return(0);
}
