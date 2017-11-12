#include <iostream>

using namespace std;

int main()
{
    struct {
            string str;
            int id;


    }c1 = {"Hello",7};
    int value{5};
    cout << value<<endl;
    int numbers[]{1,2,3,4};
    cout <<numbers<<endl;
    int *pSomething{};
    cout << pSomething << endl;

    cout << c1.str<< endl;
    cout << c1.id<< endl;
    return 0;
}
