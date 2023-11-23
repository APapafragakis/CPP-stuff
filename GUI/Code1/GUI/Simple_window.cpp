
//
// This is a GUI support code to the chapters 12-16 of the book
// "Programming -- Principles and Practice Using C++" by Bjarne Stroustrup
//

#include "Simple_window.h"
#include <iostream>

//------------------------------------------------------------------------------

Simple_window::Simple_window(Point xy, int w, int h, const string& title) :
    Window(xy,w,h,title),
    next_button(Point(x_max()-70,0), 70, 20, "Next", cb_next),
    image_name(Point(x_max()-550,0), 50, 20, "Image"),
    image_text(Point(x_max()-470,0), 50, 20, "Text"),
    image_x(Point(x_max()-390,0), 50, 20, "I_x"),
    image_y(Point(x_max()-310,0), 50, 20, "I_y"),
    text_x(Point(x_max()-230,0), 50, 20, "T_x"),
    text_y(Point(x_max()-150,0), 50, 20, "T_y"),
    cal(nullptr),
    t(nullptr),
    button_pushed(false),
    graphs_changed(false)
{
    attach(next_button);
    attach(image_name);
    attach(image_text);
    attach(image_x);
    attach(image_y);
    attach(text_x);
    attach(text_y);
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
    while (!button_pushed) {
        if(graphs_changed==true){
            Fl::redraw();
            graphs_changed=false;
        }
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
    int imagex = image_x.get_int();
    int imagey = image_y.get_int();
    int textx = text_x.get_int();
    int texty = text_y.get_int();

    if(std::strcmp(image_name.get_string().c_str(),"quit")==0 || std::strcmp(image_text.get_string().c_str(),"quit")==0 || imagex==-1 || imagey==-1 || textx==-1 || texty==-1){
        button_pushed = true;
        hide();
    }else{
        graphs_changed=true;
        Graph_lib::Window::detach(*cal);
        Graph_lib::Window::detach(*t);
        cal=new Image(Point(imagex,imagey),image_name.get_string().c_str());
        t=new Text(Point(textx,texty),image_text.get_string().c_str());
        t->set_font(Graph_lib::Font::times_bold);
        t->set_font_size(20); 
        t->set_color(Color::black);
        attach(*cal);
        attach(*t);
    }
   
}

//------------------------------------------------------------------------------
