
//
// This is example code from Chapter 12.3 "A first example" of
// "Programming -- Principles and Practice Using C++" by Bjarne Stroustrup
//

// The NOGDI below is needed to prevent Windows from including wingdi.h which has a duplicate
// declaration of 'Polygon' and throws ambiguous error.
#if defined(WIN32) || defined(_WIN32) || defined(__WIN32) && !defined(__CYGWIN__)
#define NOGDI
#endif

#include "Simple_window.h" // get access to our window library
#include "Graph.h"
#include <fstream>
#include <iostream>
using std::ifstream; // get access to our graphics library facilities

//------------------------------------------------------------------------------

int main()
{
    using namespace std;
    using namespace Graph_lib; // our graphics facilities are in Graph_lib

    ifstream file("Points.txt");
    string data = "";
    std::vector<Point> p;
    while (getline(file, data, '\n'))
    {
        std::stringstream ss(data);
        std::string x;
        int i=0;
        std::string array[2];
        while(std::getline(ss,x,',')){
            std::cout << x <<",";
            array[i++]=x;
        }
        //std::cout<<endl<< array[0] <<" endl "<<array[1]<<endl;
        p.push_back(Point(stoi(array[0]),stoi(array[1])));
    }
    file.close();

    
    


    Point tl(100, 100); // to become top left  corner of window

    Simple_window win(tl, 600, 400, "Canvas",p); // make a simple window
    
    win.wait_for_button(); // give control to the display engine
}

//------------------------------------------------------------------------------
