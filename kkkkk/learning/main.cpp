#include <iostream>
#include <fstream>
#include <vector>
#include <list>
#include <map>
using namespace std;
ofstream f;
string outfile = "text.txt";
string outfile2= "stats.txt";
ifstream infile;
//making sure we are using the same memory size we need
#pragma pack(push,1)

//creating structure
struct person{
char name[50];
int age;
double weight;

};
void mapManuplation(){


map<string,int> ages;

ages["dawit"] = 40;

ages["d"] = 46;

ages["t"] = 45;
ages.insert(pair<string,int>("peter",24));
for(map<string,int>::iterator it = ages.begin();it!=ages.end();it++){
cout<<it->first<<":" << it->second << endl;
}

if(ages.find("k") !=ages.end()){

cout<<"found";
}
}
void ListManuplation(){

list<int> li;
li.push_back(1);
li.push_back(2);
li.push_back(3);
li.push_back(4);
li.push_front(10);
list<int>::iterator it = li.begin();

while(it != li.end()){

if(*it ==2){

li.insert(it,123);
}
cout<< *it <<endl;
it++;
}

for(list<int>::iterator it=li.begin();it!=li.end();it++)
{

cout<< *it <<endl;

}
}
void VectorManuplation(){

vector<vector<int>>grid(3,vector<int>(4,7));
for(int i=0;i<=grid.size();i++){
for(int j=0;j<=grid[i].size();j++){

cout<<grid[i][j]<<flush;

}


}

/*
name.push_back("Dawit");
name.push_back("teme");
name.push_back("ate");

for(vector<string>::iterator it=name.begin();it!=name.end();it++){

cout << *it<<endl;
}

vector<string>::iterator it = name.begin();
*it+=1;
name.reserve(100);
cout<<name.capacity()<<endl;*/

}
// struct writing
void writeFromstruct(){
person someone ={"dawit",21,30};
string filename = "structFile.bin";
f.open(filename,ios::binary);
if(f.is_open()){

f.write(reinterpret_cast<char *>(&someone),sizeof(person));
f.close();
}
else{

cout << "File not opened";
}



}
void writetofile(){

f.open(outfile,ios::out);
if(f.is_open()){


f<<"This is dawit"<<endl;
f<<"this os "<<endl;
f.close();
}

else{


cout << "could not openfile"<<endl;
}
}

void parsingText(){

infile.open(outfile2);
if(infile.is_open()){

string line;
while(!infile.eof()){
getline(infile,line,':');
int population;
infile >> population;
infile >> ws;
if(!infile){

break;
}
cout<<line<<"----"<<population<<endl;
}

}
}
void readFile(){


infile.open(outfile);
if(infile.is_open()){

string line;
while(!infile.eof()){
getline(infile,line);
cout<<line<<endl;
}
cout<<"end of file"<<endl;
infile.close();
}
else{

    cout<<"cannot open the file"<<endl;
}

}
#pragma pack(pop)
int main(){

//ofstream file;
//writetofile();
//readFile();
//cout <<sizeof(person) << endl;
//writeFromstruct();
//VectorManuplation();
//ListManuplation();
mapManuplation();
//parsingText();

return 0;

}
