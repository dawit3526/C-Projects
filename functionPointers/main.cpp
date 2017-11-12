#include <iostream>

using namespace std;
void print(int v){

cout<<"hello"<< v<<endl;


}

int main()
{
    void(*ptest)(int) = print;
    ptest(10);
    return 0;
}
