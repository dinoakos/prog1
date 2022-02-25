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
    
    Point tl {100, 100};

    Simple_window win {tl, 600, 400, "ch12"};
    win.wait_for_button();

    //feladat 1
    Rectangle r{Point{10,10}, 50, 20};
    r.set_color(Color::blue);
    win.attach(r);

    Polygon rp;
    rp.add(Point{100, 40});
    rp.add(Point{120, 40});
    rp.add(Point{120, 60});
    rp.add(Point{100, 60});
    rp.set_color(Color::red);
    win.attach(rp);

    win.wait_for_button();

    //feladat 2
    Rectangle rt{Point{200, 50}, 100, 30};
    win.attach(rt);

    Text t {Point{205, 75}, "Howdy!"};
    t.set_font(Font::helvetica_bold);
    t.set_font_size(20);
    win.attach(t);

    
    win.wait_for_button();

    //feladat 3
    Text t1 {Point{50, 250}, "D"};
    t1.set_font(Font::courier);
    t1.set_font_size(150);
    Text t2 {Point{150, 250}, "A"};
    t2.set_font(Font::courier);
    t2.set_font_size(150);
    t1.set_color(Color::blue);
    t2.set_color(Color::yellow);
    win.attach(t1);
    win.attach(t2);
   

    
    win.wait_for_button();

    //feladat 4
    Vector_ref<Rectangle> vr;
    int w = 50;
    for (int row = 0; row < 3; ++row) {
        for (int col = 0; col < 3; ++col) {
            vr.push_back(new Rectangle{Point{350+w*col, 200+w*row}, w, w});
            int i = vr.size() - 1;

            i % 2 == 0
                ? vr[i].set_fill_color(Color::red)
                : vr[i].set_fill_color(Color::white);

            win.attach(vr[i]);
        }
    }

   
    win.wait_for_button();

    //feladat 5
    Rectangle big {Point{150, 150}, x_max() * 2 / 3, y_max() * 3 / 4};
    big.set_style(Line_style(Line_style::solid, 8));
    big.set_color(Color::red);

    win.attach(big);
    
    win.wait_for_button();

    

    // feladat 6
    Rectangle walls{Point{200, 200}, 200, 100};
    walls.set_color(Color::blue);
    walls.set_fill_color(Color::blue);
    win.attach(walls);

    Rectangle chimney{Point{225, 125}, 25, 75};
    chimney.set_color(Color::red);
    chimney.set_fill_color(Color::red);
    win.attach(chimney);

    Polygon roof;
    roof.add(Point{300, 100});
    roof.add(Point{420, 200});
    roof.add(Point{180, 200});
    roof.set_color(Color::red);
    roof.set_fill_color(Color::red);
    win.attach(roof);

    Rectangle door{Point{280, 240}, 40, 60};
    door.set_color(Color::white);
    door.set_fill_color(Color::white);
    win.attach(door);

    Rectangle win1{Point{235, 235}, 30, 30};
    win1.set_color(Color::white);
    win1.set_fill_color(Color::dark_blue);
    win1.set_style(Line_style(Line_style::solid, 4));
    win.attach(win1);

    Rectangle win2{Point{335, 235}, 30, 30};
    win2.set_color(Color::white);
    win2.set_fill_color(Color::dark_blue);
    win2.set_style(Line_style(Line_style::solid, 4));
    win.attach(win2);

    win.wait_for_button();

    //feladat 8
    Circle bl {Point{100, 100}, 75};
    bl.set_style(Line_style(Line_style::solid, 12));
    bl.set_color(Color::blue);
    win.attach(bl);

    Circle yl {Point{180, 175}, 75};
    yl.set_style(Line_style(Line_style::solid, 12));
    yl.set_color(Color::yellow);
    win.attach(yl);

    Circle bk {Point{260, 100}, 75};
    bk.set_style(Line_style(Line_style::solid, 12));
    bk.set_color(Color::black);
    win.attach(bk);

    Circle gn {Point{340, 175}, 75};
    gn.set_style(Line_style(Line_style::solid, 12));
    gn.set_color(Color::green);
    win.attach(gn);

    Circle rd {Point{420, 100}, 75};
    rd.set_style(Line_style(Line_style::solid, 12));
    rd.set_color(Color::red);
    win.attach(rd);

    win.wait_for_button();
    //09

    Image ii {Point{100, 25}, "./asd.jpg"};
    win.attach(ii);

    Text caption {Point{120, 355}, "test"};
    caption.set_font(Font::courier);
    caption.set_font_size(20);
    win.attach(caption);
    win.set_label("test");

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

