
//
// This is a GUI support code to the chapters 12-16 of the book
// "Programming -- Principles and Practice Using C++" by Bjarne Stroustrup
//

#include "Simple_window.h"
#include <iostream>

//------------------------------------------------------------------------------

Simple_window::Simple_window(Point xy, int w, int h, const string &title, std::vector<Point> &p) : 
Window(xy, w, h, title),
next_button(Point(x_max() - 70, 0), 70, 20, "Next", cb_next),
cal(nullptr),
t(nullptr),
xa(Axis::x,Point(30,330),300,10,"300"),
ya(Axis::y,Point(30,330),300,10,"300"),
button_pushed(false),
graphs_changed(false)
{   
    drawing.set_color(Color::black);
    xa.set_color(Color::black);
    ya.set_color(Color::black);

    int i=0; 
    Point temp_p;
    Lines l_temp;
    while(i<p.size()){
        Point temp = p.at(i);
        drawing.add(temp);
        i++;
    }
    attach(xa);
    attach(ya);
    attach(next_button);
    attach(drawing);

}

//------------------------------------------------------------------------------

bool Simple_window::wait_for_button()
// modified event loop:
// handle all events (as per default), quit when button_pushed becomes true
// this allows graphics without control inversion
{
    show();
    button_pushed = false;
#if 1
    // Simpler handler
    while (!button_pushed)
    {
        Fl::wait();
    }
    Fl::redraw();
#else
    // To handle the case where the user presses the X button in the window frame
    // to kill the application, change the condition to 0 to enable this branch.
    Fl::run();
#endif
    return button_pushed;
}

//------------------------------------------------------------------------------

void Simple_window::cb_next(Address, Address pw)
// call Simple_window::next() for the window located at pw
{
    reference_to<Simple_window>(pw).next();
}

//------------------------------------------------------------------------------

void Simple_window::next()
{

    button_pushed = true;
    hide();
}

//------------------------------------------------------------------------------
