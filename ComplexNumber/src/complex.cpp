    #include "complex.h"


complex::complex():real(0),imaginary(0)
{
    //ctor
}
complex::complex(double real, double imaginary):real(real),imaginary(imaginary){}
complex::complex(const complex &other){
real = other.real;
imaginary = other.imaginary;

}
//complex operator+(const complex &c1,const complex &c2){
//
//return complex(c1.getReal()+c2.getReal()),complex c1.getImag()+c2.getImag());
//
//

//}

const complex &complex::operator=(const complex &other){
real = other.real;
imaginary = other.imaginary;
return *this;


}
bool complex::operator==(const complex &other) const{
    return (real = other.real) &&(imaginary = other.imaginary);
}


complex::~complex()
{
    //dtor
}
