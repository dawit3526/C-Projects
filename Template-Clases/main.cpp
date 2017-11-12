#include <iostream>
#include <vector>

using namespace std;
template<class T,class K >
class Test{
private:
    T obj;
    K val;
public:
    Test(T obj,K val){
        this->obj = obj;
        this->val = val;
    }
    void print(){

    cout<<obj<<endl;
    for(vector<int>::iterator it = val.begin();it!=val.end();it++){
            cout<<*it<<endl;
    }

    }


};
template<typename B>
void print(B n){
cout<<"Function Template: "<< B()<<endl;
}
void print(int v){
cout << v;
}
int main()
{
vector<int> v = {1,2,3,45,5};
    Test<string,vector<int>> test1("Hello",v);
    test1.print();
    print<string>("Dawit");
    print("Dawit");
    print<bool>(false);
    print<double>(5.00);
    //cout << "Hello world!" << endl;
    return 0;
}
