#include <iostream>
#include <map>
using namespace std;
class person{
private:
    int age;
    string name;

    public:
        person():name(""),age(0){}

    person(string name,int age):name(name),age(age){}
    void print()const{
    cout <<name<<":"<<age <<flush;
    }
    bool operator<(const person &other){
    if(name==other.name){

    return age < other.age;

    }
    else{
    return name<other.name;
    }
    }

};

int main()
{

    map<person,int> people;
    people[ person("Mike",50)] =30;
    people[person("dawit",60)] =20 ;

    for(map<person,int>::iterator it=people.begin();it!= people.end();it++){

    cout<<it->second <<":"<<flush;
    it->first.print();
    cout <<endl;

    }
    return 0;
}
