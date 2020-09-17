#include <string>
#ifndef MY_WINDOW_H_INCLUDED
#define MY_WINDOW_H_INCLUDED

class my_titleClass {
public :
std::string my_title = "Title from class";  //data member
std::string  makeTitle() { std::string inTitle; inTitle = my_title; return inTitle; }
};


#endif // MY_WINDOW_H_INCLUDED
