/*
g++ -w Wall -std=c++11 GUI/Graph.cpp GUI/Window.cpp GUI/GUI.cpp GUI/Simple_window.cpp 
drill12.cpp fltk-config --ldflags --use-images -o a2.out
*/
#include "../GUI/Simple_window.h"
#include "../GUI/Graph.h"

#include <string>
#include <iostream>
#include <vector>

using namespace Graph_lib;

int main()
try {
    Simple_window win {tl, 600, 400, "06-1"};
    
    Rectangle tooBig{Point{500, 300}, 300, 300};
    
    win.set_label("06-1");

    win.wait_for_button();
}
}
catch(exception& e) {
    cerr << "exception: " << e.what() << '\n';
    return 1;
}
catch(...) {
    cerr << "error\n";
    return 2;
}

