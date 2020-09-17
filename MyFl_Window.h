#ifndef MYFL_WINDOW_H
#define MYFL_WINDOW_H

#include <FL/Fl_Window.H>


class MyFl_Window : public Fl_Window
{
      public:
            MyFl_Window(int w,int h,const char* title);
            virtual ~MyFl_Window();

      protected:

      private:
};

#endif // MYFL_WINDOW_H
