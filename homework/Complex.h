#ifndef UNTITLED_COMPLEX_H
#define UNTITLED_COMPLEX_H
#include <iostream>
#include <math.h>
struct Complex{
    double real = 0;
    double im = 0;
    Complex sum(Complex c1);
    Complex substract(Complex c1);
    Complex mupltiple(Complex c1);
    Complex divide(Complex c1);
    double module();
};
#endif //UNTITLED_COMPLEX_H
