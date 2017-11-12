#ifndef COMPLEX_H
#define COMPLEX_H


class complex
{
double real;double imaginary;
    public:
        complex();
        complex(double real,double imaginary);
        complex(const complex &other);

        double getReal(){

        return real;
        }
        double getImag(){


        return imaginary;
        }
        virtual ~complex();

//complex::operator+(const complex &c1,const complex &c2);
bool operator=(const complex &other) const;
};

#endif // COMPLEX_H
