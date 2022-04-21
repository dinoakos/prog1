#include <iostream>
#include <iomanip>
#include <string>
#include <vector>
#include <cmath>
#include <complex>
#include <cerrno>
#include "ize/Matrix.h"
#include "ize/MatrixIO.h"
#include "list"

using namespace std;
using namespace Numeric_lib;

int main(){
    try{
        cout<<"sizeof:\n";
        cout<<"char\t"<< sizeof(char)<<"\n";
        cout<<"sohrt\t"<< sizeof(short)<<"\n";
        cout<<"int\t"<< sizeof(int)<<"\n";
        cout<<"float\t"<< sizeof(float)<<"\n";
        cout<<"double\t"<< sizeof(double)<<"\n";
        cout<<"int*\t"<< sizeof(int*)<<"\n";
        cout<<"double*\t"<< sizeof(double*)<<"\n";

        cout << "\nMatrix méretek:\n";

        Matrix<int> a(10);
        Matrix<int> b(100);
        Matrix<double> c(10);
        Matrix<int,2> d(10,10);
        Matrix<int,3> e(10,10,10);
        cout << "1d int 10 elem\t\t" << sizeof(a) << endl;
        cout << "1d int 100 elem\t\t" << sizeof(b) << endl;
        cout << "1d double 10 elem\t\t" << sizeof(c) << endl;
        cout << "2d int 10*10 elem\t\t" << sizeof(d) << endl;
        cout << "3d int 10*10*10 elem\t\t" << sizeof(e) << endl;

        cout << "\nnumber of elements:\n";
        cout << "a:\t" << a.size() << '\n';
        cout << "b:\t" << b.size() << '\n';
        cout << "c:\t" << c.size() << '\n';
        cout << "d:\t" << d.size() << '\n';
        cout << "e:\t" << e.size() << '\n';

    
    //cout << "Enter numbers: \n";
    
    /*while(true){
        double s;
        cin >> s;
        if(s<0 ){
            cout<<"Nincs sqrt\n";
            continue;
        }
        cout << sqrt(s)<<endl;

    }*/
    //errno error numbert tartalmaz ha errno=EDOM az egy domain errort jelent

    
    cout << "enter 10 floats \n";
    Matrix<double> m2(10);
    double d2;
    for (size_t i = 0; i < m2.size(); ++i)
    {
        cin >>d2;
        if(!cin){throw runtime_error("problem reading cin");};
        m2[i]=d2;
    }
    cout <<"Matrix:\n" << m2 << endl;


    cout << "2 szám:";
    int x,y;
    cin >> x >> y;

                   //5 5
    Matrix<int,2> m3(x,y);
    for (int i = 0; i < x; i++){ 
        for (int j = 0; j < y; j++){
             m3[i][j] = (i+1)*(j+1);
        }
    }
    cout << m3;

    Matrix<complex<double>> mcomp(10);
    cout << "\nEnter 10 complex";
    complex<double> comp;
    for (int i = 0; i < 10; i++)
    {
        cin >> comp;
        if(!cin){ throw runtime_error("bad cin");}
        mcomp[i]=comp;
    }
    complex<double> sum;
    for (int i = 0; i < mcomp.size(); i++)
    {
        sum+=mcomp[i];
    }
    cout << "sum:" << sum << endl;

    //6 int
    cout << "adj meg hat intet";
    Matrix<int,2> m(2,3);
    for (int i = 0; i < 2; i++){ 
        for (int j = 0; j < 3; j++){
             cin >> m[i][j];
        }
    }
    cout << m;
    
    
    
    
    



    }catch(exception& e){
        cerr<<e.what()<<endl;


    }catch(...){
        cout<<"coki\n";


    }

    

}
