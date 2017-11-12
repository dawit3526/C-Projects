#include <iostream>
#include <algorithm>

#include <vector>

using namespace std;

bool match(string str){

return str.size() == 4;

}
int countString(vector<string> &numbers, bool (*match)(string test)){
int total=0;
for(int i=0;i<=numbers.size();i++){

    if(match(numbers[i])){


    total++;
    }

}
return total;
}

int main()
{
    //cout << "Hello world!" << endl;
    vector<string> numbers;

    numbers.push_back("one");
    numbers.push_back("two");
    numbers.push_back("three");
    numbers.push_back("four");
    cout << match("four")<<endl;
    cout<<count_if(numbers.begin(),numbers.end(),match) << endl;

    return 0;
}
