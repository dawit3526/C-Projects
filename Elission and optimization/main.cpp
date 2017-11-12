#include <iostream>
#include <vector>
#include "exe.h"
using namespace std;

class Test{
public:
    Test(){

        cout<< "constructor"<<endl;

    }

    Test(int i){

        cout << "Parametrized constructor"<<endl;


    }

    Test(const Test &other){

        cout<<"copy contructor called"<<endl;
    }

    Test &operator=(const Test &other){
        cout << "Assignmebt operator"<<endl;
        return *this;
    }
    ~Test(){
        cout<<"destractor"<<endl;
    }
    friend ostream &operator<<(ostream &out,const Test &other);
};

ostream &operator<<(ostream &out,const Test &other){

cout <<"hello from test"<<endl;
}
Test getTest(){
    return Test();


}

int main()
{
    Test test1=getTest();
    vector<Test> vec;
    vec.push_back(test1);

    int value =7;
    cout << "this is me" <<endl;
    cout<< num++<<endl;
    //int *pvalue = &value++;
//    cout << *pvalue <<endl;
    cout << test1 << endl;
    return 0;
}
