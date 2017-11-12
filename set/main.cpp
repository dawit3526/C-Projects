#include <iostream>
#include <set>
using namespace std;

class Test{
public:
    int id;
    string name;
public:
    Test(int id,string name):id(id),name(name){}

void print() const{

    cout<< id<< ":" << name <<endl;

}
bool operator<(const Test &other) const{
if(name ==other.name){
return id<other.id;
}
else{
return name < other.name;
}
}

};

int main()
{

    set<int> numbers;

    numbers.insert(30);
    numbers.insert(20);
    numbers.insert(50);
    numbers.insert(60);
    numbers.insert(30);

    for(set<int>::iterator it = numbers.begin();it!=numbers.end();it++){

    cout<<*it<<endl;


    }
    if(numbers.count(130)){
    cout<<"30 found"<<endl;

    }
    set<Test> tests;
    tests.insert(Test(10,"Dawit"));
    tests.insert(Test(30,"Dawit"));
    tests.insert(Test(10,"Me"));
    tests.insert(Test(10,"them"));
     for(set<Test>::iterator it = tests.begin();it!=tests.end();it++){

    it->print();


    }

   // cout << "Hello world!" << endl;
    return 0;
}
