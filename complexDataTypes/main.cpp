#include <iostream>
#include <vector>
#include <map>
#include <set>

using namespace std;

int main()
{
    map<string,vector<int>> scores;
    set<vector<int>> ages;
    vector<int> values ={10,20,30,20};
    vector<int> values2 ={11,20,30,20};
    ages.insert(values);
    ages.insert(values2);
 for(set<vector<int>>::iterator it = ages.begin();it!=ages.end();it++){
        vector<int> k = *it;

        for(int i=0;i<=k.size();i++){

        cout << k[i]<<" " << endl;

        }
    }
    scores["dawit"].push_back(10);

    scores["dawit"].push_back(50);
    scores["ate"].push_back(60);
    scores["ate"].push_back(70);

    for(map<string,vector<int>>::iterator it = scores.begin();it!=scores.end();it++){

        string name = it->first;
        vector<int> score = it->second;
        cout<<name << " " << flush;
        for(int i=0;i<=score.size();i++){
            cout << score[i] << " "<<flush ;

        }
        cout <<endl;
    }
    //cout << "Hello world!" << endl;
    return 0;
}
