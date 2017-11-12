#include <iostream>

using namespace std;
class parent{

    public:
        parent(){}
        parent(const parent &other){cout << "copy constractor"<<endl;}

    public:
    virtual void print(){

        cout<< "parent"<<endl;
    }

};
class child:public parent{

    public:
        child(){}
        void print(){

            cout<< "child"<<endl;
            }

};
int main()
{
    child c1;
    parent &p1=c1;
    parent p2 = child();
   // c1.print();
    p1.print();
    p2.print();
    //cout << "Hello world!" << endl;
    return 0;
}
