#include <iostream>
#include "ring.h"
using namespace std;

int main()
{
ring<int> num (3);
    num.add(1);
    num.add(2);
    num.add(3);
    num.add(4);
    num.add(5);
    //it.print(6);
    for(int i=0;i<=num.size();i++){
        cout<<num.get(i)<<endl;

    }
    //cout << "Hello world!" << endl;
    return 0;
}
