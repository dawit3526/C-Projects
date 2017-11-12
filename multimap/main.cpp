#include <iostream>
#include <map>

using namespace std;


int main()
{

    multimap<int,string> lookup;
    lookup.insert(make_pair(30,"dawit"));
    lookup.insert(make_pair(40,"ate"));
    lookup.insert(make_pair(40,"berhe"));
    lookup.insert(make_pair(60,"zafu"));
    lookup.insert(make_pair(70,"me"));

    for(multimap<int,string>::iterator it=lookup.begin();it!=lookup.end();it++){

    cout << it->first <<":"<< it->second <<endl;
    }
    cout <<"__________________________________"<<endl;
    for(multimap<int,string>::iterator it=lookup.find(40);it!=lookup.end();it++){

    cout << it->first <<":"<< it->second <<endl;
    }
    cout << "-----------------------------" << endl;

    auto its=lookup.equal_range(30);


    for(multimap<int,string>::iterator it=its.first;it!=its.second;it++){

    cout << it->first <<":"<< it->second <<endl;
    }
    return 0;
}
