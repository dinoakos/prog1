#include "../GUI/Simple_window.h"
#include "../GUI/Graph.h"
#include "./Arc.h"
#include <string>
#include <iostream>
using namespace Graph_lib;
int main() try {
Point tl {100, 100};
Simple_window win {
tl, 600, 400, "Chapter 13 Ex 1"}; 
Circle c {Point{300, 200}, 75};
c.set_color(Color::yellow);
win.attach(c);
Arc a1 {Point{300, 200}, 50, 0, 90};
a1.set_color(Color::blue);
win.attach(a1);
Arc a2 {Point{300, 200}, 100, 90, 180};
a2.set_color(Color::red);
win.attach(a2); Arc a3 {Point{300, 200}, 150, 90, 360}; a3.set_color(Color::green); win.attach(a3); Arc a4 {Point{300, 200}, 100, 270, 360}; a4.set_color(Color::red); win.attach(a4); win.wait_for_button(); 
//2
const Point tl {100, 100}; Simple_window win {tl, 600, 400, "Chapter 13 Ex 2"}; Box b1 {Point{200, 150}, 200, 100, 20}; b1.set_color(Color::red); win.attach(b1); Box b2 {Point{100, 100}, 120, 80, 10}; b2.set_style(Line_style{Line_style::solid,4}); b2.set_color(Color::blue); win.attach(b2); Box b3 {Point{400, 300}, 50, 50, 25}; win.attach(b3); win.wait_for_button();
//3
const Point tl {100, 100}; Simple_window win {tl, 600, 400, "Chapter 12 Ex 3"}; Arrow a1 {Point{100, 100}, Point{250, 200}}; win.attach(a1); Arrow a2 {Point{500, 300}, Point{500, 100}}; a2.set_color(Color::dark_green); win.attach(a2); Arrow a3 {Point{525, 100}, Point{525, 300}}; a3.set_color(Color::blue); win.attach(a3); Arrow a4 {Point{300, 50}, Point{100, 300}}; a4.set_color(Color::red); win.attach(a4); win.wait_for_button();
//6
const Point tl {100, 100}; Simple_window win {tl, 600, 400, "Chapter 13 Ex 6"}; Text_box shape {Point{50, 50}, 100, 50, "Shape"}; win.attach(shape); Text_box rect {Point{50, 200}, 100, 50, "Rectangle"}; win.attach(rect); Text_box tb {Point{50, 300}, 100, 50, "Textbox"}; win.attach(tb); Text_box circ {Point{200, 200}, 100, 50, "Circle"}; win.attach(circ); Arrow a1 {n(rect), s(shape)}; win.attach(a1); Arrow a2 {n(tb), s(rect)}; win.attach(a2); Arrow a3 {nw(circ), se(shape)}; win.attach(a3); win.wait_for_button();







} catch(exception& e) { cerr << "exception: " << e.what() << '\n'; return 1; } catch(...) { cerr << "error\n"; return 2; } 
