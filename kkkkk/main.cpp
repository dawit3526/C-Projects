#include <iostream>
using namespace std;


bool xxx() {

    int testNum;

    char *ptr;

    testNum = 1;

    ptr = (char *) &testNum;

    cout<<*ptr;

    return (*ptr);

}

int main(){

xxx();
}
