#include <iostream>
#include <initializer_list>
#include <vector>
using namespace std;
class Test{

public :

    Test(initializer_list<string> tests){
        for(auto value:tests){
            cout << value << endl;
        }

    }
    void print(initializer_list<string> tests){


        for(auto value:tests){

            cout << value << endl;

        }
    }

};

int main()
{
    vector<int> numbers {1,2,3,4};

    Test test{"apple","orange","banana"};
    test.print({"dawit","dawot","abel"});
    cout << "Hello world!" << endl;
    return 0;
}
