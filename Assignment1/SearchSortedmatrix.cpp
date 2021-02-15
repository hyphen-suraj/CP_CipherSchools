#include <bits/stdc++.h>

using namespace std;

int search(int mat [4][4],int x){

    int n=sizeof(mat);
    int m=sizeof(mat[0]);

    int i=0,j=m-1;

    while(i<n && j>=0){
        if(mat[i][j]==x) {
            cout << "( " << i << "," << j << " )";
            break;
        }

        else if(mat[i][j]<x)
            i++;

        else if(mat[i][j]>x)
            j--;
    }

    return 0;
}

int main(){

    int mat[4][4] = { { 10, 20, 30, 40 },
                      { 15, 25, 35, 45 },
                      { 27, 29, 37, 48 },
                      { 32, 33, 39, 50 } };

    int x=29;

    search(mat,x);
    return 0;
}
