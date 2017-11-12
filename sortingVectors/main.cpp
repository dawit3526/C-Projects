#include <iostream>
#include <vector>
#include <algorithm>
#include <set>
using namespace std;

class Test{
    int id;
    string name;
public:
    Test(int id, string name):name(name),id(id){}


void print(){
cout<< id <<":"<< name << endl;

}


//bool operator<(const Test &other) const{
//
//return name<other.name;
//}
friend bool comp(const Test &a , const Test &b);
};

bool comp(const Test &a , const Test &b){

    return a.id<b.id;

}
int main()
{

    vector<Test> tests;

    tests.push_back(Test(30,"dawit"));
    tests.push_back(Test(40,"ddd"));
    tests.push_back(Test(30,"dawit"));
    tests.push_back(Test(40,"ddd"));
    tests.push_back(Test(30,"dawit"));
    tests.push_back(Test(40,"ddd"));
    sort(tests.begin(),tests.end(),comp);
    for(vector<Test>::iterator it=tests.begin();it !=tests.end();it++){

      it->print();

    }
    //cout << "Hello world!" << endl;
    return 0;
}
