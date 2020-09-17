#include "MyFl_Window.h"
#include <FL/Fl_Text_Display.H>
#include <FL/Fl_Input.H>

MyFl_Window::MyFl_Window(int w,int h,const char * title)
            : Fl_Window(w,h,title)
{
      //ctor
  begin();
  Fl_Text_Display* td = new Fl_Text_Display(120,50,600,300);
  Fl_Input* ti = new Fl_Input(120,360,600,30);
  end();

}

MyFl_Window::~MyFl_Window()
{
      //dtor
}
