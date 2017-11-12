#include <iostream>
#include <functional>

using namespace std;

int main()
{
int one=1,two=3;

    [one,two]()mutable {
    one = 10;
    int sum = one + two;
    cout << sum << endl;}();
    int *it;
    function<int(int,int)> add = [](int one,int two){return one+two;};
    cout << add(7,3) << endl;
    cout << "Hello world!" << endl;
    return 0;
}
