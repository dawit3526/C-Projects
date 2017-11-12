#include <iostream>
#include <vector>
#include <set>

using namespace std;

bool CheckXFibnocies(vector<int> &A){

if(A.size() == 0){
return false;
}
int j=1;
for(int i=0;i<=A.size()-2;i++){
    if(A[i]+A[j] != A[i+2]){
        return false;
    }

    j++;
if(j==A.size()-1){
return true;
}
}

return true;

}
void reverseString(char *str){
char * end = str;

char temp;
if(str){
while(*end){

++end;

}
--end;
while(str< end){

temp = *str;
*str++ = *end;
* end-- = temp;
}

}
}
int getLargeDiference(vector<int> &values,int sum){

if(values.size() == 0){

return 0;
}
int diff =0;

int low = 0;
int high = 1;
set<int> v;

while(low<high && high <values.size()){
int comp = sum-values[low];
   if(v.find(comp)!=v.end())
low++;
high++;
}

return diff;

}

int main()
{
    char *str = "dawit";
    string k = str[0]+"dawit";

    k+=str[0];
//    cout << str.length();
    //reverseString(str);
    vector<int> Numbers = {1,1,2,3,5};
    //int result = getLargeDiference(Numbers);
//    cout << result << endl;
if(CheckXFibnocies(Numbers)){
    cout<<"The number is feoncii series";

}
else{

cout<< "The number is not Feboncii series";
}
    return 0;
}
