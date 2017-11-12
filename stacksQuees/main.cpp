#include <iostream>
#include <stack>
#include <queue>
using namespace std;

class Test{

private:
    string name;

    public:
    Test(string name):name(name){}
    ~Test(){
        cout << "objects destroyed"<<endl;
    }

    void print(){
    cout << name <<endl;

    }

};

int main()
{
 stack<Test> testStacks;

 testStacks.push(Test("Dawit"));
 testStacks.push(Test("Ate"));
 /*Test t = testStacks.top();
 t.print();
 testStacks.pop();
 Test t2 = testStacks.top();
 t2.print();*/
 cout<<"---------------Stack using while loop"<<endl;
 while(testStacks.size()>0){
 Test &t3 = testStacks.top();
 t3.print();
 testStacks.pop();

 }


 cout << endl;


  queue<Test> testqeue;

 testqeue.push(Test("Dawit"));
 testqeue.push(Test("Ate"));
 /*Test t = testStacks.top();
 t.print();
 testStacks.pop();
 Test t2 = testStacks.top();
 t2.print();*/
 cout << "this is the last person entered "<< testqeue.back().print() << endl;
 cout<<"---------------Qeue using while loop"<<endl;
 while(testqeue.size()>0){
 Test &t3 = testqeue.front();
 t3.print();
 testqeue.pop();

 }


    //cout << "Hello world!" << endl;
    return 0;
}
