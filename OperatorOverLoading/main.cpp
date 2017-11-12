#include <iostream>

using namespace std;
class Test{
private:
    int id;
    string name;

    public:
        Test():id(0),name(""){}
        Test(int id,string name):id(id),name(name){}


    void print (){


    cout << id<<":"<<name<<endl;
    }

const Test &operator=(const Test &other){
cout<<"Asignment operator is running"<<endl;
id = other.id;
name = other.name;
return *this;
}
Test(const Test  &other){
cout<<"copy constructor is running";
*this = other;



}
friend ostream &operator<<(ostream &out ,const Test &test){

out<<test.id << ":"<<test.name;
return out;

}

};

int main()
{
    Test test1(10,"Mike");
    test1.print();
    Test test2(10,"dawit");
    Test test3(20,"ddddd");

    test3 = test2 = test1;
    test3.print();
    Test test4 = test1;
    //test4.print();
    cout << test1;
    //cout << "Hello world!" << endl;
    return 0;
}
