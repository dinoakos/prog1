#include "./GUI/Graph.h"
#include "./GUI/Simple_window.h"
#include "std_lib_facilities.h"

double one(double x){return 1;}
double slope(double x){return x/2;}
double square(double x){return x*x;}
double sloping_cos(double x){return cos(x)+slope(x);}

int main()
{
	try
	{

		using namespace Graph_lib;
		int  xmax = 600;
		int  ymax = 600;
		Simple_window win{ Point{100,100}, xmax, ymax, "Function Graphs"};
		
		int Origx = xmax/2; int Origy = ymax/2;
		Point Origo{Origx,Origy};
		int xlen = 400; int ylen = 400;


		Axis x {Axis::x,Point{100,Origy}, xlen, 20, "1=20 pixels"};
		x.set_color(Color::red);
		Axis y {Axis::y,Point{Origx,ylen+100}, ylen, 20, "1=20 pixels"};
		y.set_color(Color::red);
		win.attach(x);
		win.attach(y);


		int r_min = -10; int r_max = 11;
		int xscale = 20; int yscale = 20;
		int pts = 400;

		Function constans{one, r_min, r_max, Origo, pts, xscale, yscale};
		Function linearis{slope, r_min, r_max, Origo, pts, xscale, yscale};	Text label{Point{100,Origy+85}, "x/2"};
		Function parabola{square, r_min, r_max, Origo, pts, xscale, yscale};
		Function cosinus{cos, r_min, r_max, Origo, pts, xscale, yscale}; cosinus.set_color(Color::blue);
		Function sloping_cosinus{sloping_cos,r_min, r_max, Origo, pts, xscale, yscale};

		win.attach(constans);
		win.attach(linearis);
		win.attach(parabola);
		win.attach(cosinus);
		win.attach(sloping_cosinus);

		win.wait_for_button();
	}

	catch(exception& e){
		cerr<<"error: " << e.what() << endl;
		keep_window_open();
		return 1;
	}
	catch(...){
		cerr << "unknown excp." << endl;
		keep_window_open();
		return 2;
	}
	return 0;
}
