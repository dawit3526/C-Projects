#include <iostream>

using namespace std;

class Test{

    int id{3};
    string name{"Dawit"};
public:
    Test() = default;
    //Test(const Test &other) = delete;

    Test(int id):id(id){
    }
    void print(){
    cout << id << ":" << name << endl;

    }

};

int main()
{
    Test test(77);
    test.print();
    Test t2 =test;
    t2.print();
    //cout << "Hello world!" << endl;
    return 0;
}
