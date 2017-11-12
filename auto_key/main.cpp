#include <iostream>
#include <vector>
using namespace std;

int main()
{
    auto value =7;
    auto text = {"dawit","me","you"};
    for(auto x:text)
    {
        cout <<x<<endl;
    }
    vector<int> num;
    num.push_back(1);
    num.push_back(2);
    num.push_back(3);
    //cout << value<< endl;
    for(auto x:num){

    cout << x << endl;
    }
    return 0;
}
