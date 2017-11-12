#include <iostream>

using namespace std;
class Test{

    private :
        int one =1;
        int two =2;
    public:
        void run(){

            int three{3};
            int four{4};

        auto plambda = [&,this](){

        cout<< one<< endl;
        cout << two << endl;
        cout<< three << endl;
        cout << four << endl;

        };
        plambda();

        }
};
void test(void(*pFunc)(string name)){
    pFunc("dawit");
}
void divide(double (*divide)(double a,double b)){

    auto rval = divide(9,3);
    cout << rval << endl;


}
int main()
{

Test t1;
t1.run();
int one =1;
int two = 2;
int three = 3;

[one,two](){cout << one << ","<<two <<endl;}();

[one,&two](){
two = 7;cout << one << ","<<two <<endl;
}();


[&](){
two = 7;one=100;cout << one << ","<<two <<endl;
}();
    auto func = [](string name ){cout << "me" << name <<endl;};
    func("dawit");
    test(func);
    auto pDivide =[](double a,double b){
        return a/b;

    };
    cout << pDivide(10.00,5.0) << endl;
    divide(pDivide);
    //cout << "Hello world!" << endl;
    return 0;
}
