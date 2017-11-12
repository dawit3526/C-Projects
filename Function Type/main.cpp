#include <iostream>
#include <vector>

#include <algorithm>
#include <functional>
using namespace std;

int main()
{
int mat1[3][3] = {{3,1,2},{5,6,7},{8,9,10}};
int mat[3][3]={{3,1,2},{5,6,7},{8,9,10}};
int result[3][3];
int fresult[3][3];
int r=2;
int c=2;
int k=0;

  // Initializing elements of matrix mult to 0.
    for(int i = 0; i <= r; ++i)
        for(int j = 0; j <=c; ++j)
        {
            result[i][j]=0;
        }

for(int i =0;i<=r;i++){

    for(int j=0;j<=c;j++){
        for(int k=0;k<=r;k++){
            result[i][j] += mat[i][k]*mat1[k][j];

    }
    }

}

for(int i =0;i<=r;i++){

    for(int j=0;j<=c;j++){

    cout << result[i][j] << endl;
    }
    }


    return 0;
}
