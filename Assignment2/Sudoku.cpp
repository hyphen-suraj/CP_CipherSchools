# include <bits/stdc++.h>
using namespace std;

bool usedInRow(vector<vector<int>> &grid, int row, int num)
{
    for (int i = 0; i < 9; ++i)
    {
        if (grid[row][i] == num)
        {
            return true;
        }
    }
    return false;
}

bool usedInCol(vector<vector<int>> &grid, int col, int num)
{
    for (int i = 0; i < 9; ++i)
    {
        if (grid[i][col] == num)
        {
            return true;
        }
    }
    return false;
}

bool usedInBox(vector<vector<int>> &grid, int row, int col, int num)
{
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            if (grid[row + i][col + j] == num)
            {
                return true;
            }
        }
    }
    return false;
}

bool issafe(vector<vector<int>>& grid,int row,int  col,int num){

    return (!usedInRow(grid, row, num) &&
            !usedInCol(grid, col, num) &&
            !usedInBox(grid, row - row % 3, col - col % 3, num));

}

bool UnSigned(vector<vector<int>>& grid,int &row,int & col){

    for(row=0;row<=9;row++){
        for(col=0;col<=9;col++){
            if(grid[row][col]){
                return true;
            }
        }
    }
}


bool SolveGrid(vector<vector<int>>& grid){

    int row,col;

    if( ! UnSigned(grid,row,col) ){
        return true;
    }

    for(int i=0;i<=9;i++){

        if(issafe(grid,row,col,i)){
            grid[row][col]=i;

            if(SolveGrid(grid)){
                return true;
            }

            grid[row][col]=0;
        }


    }


return false;


}

int main(){


    vector<vector<int>> grid = {
            {3, 0, 6, 5, 0, 8, 4, 0, 0},
            {5, 2, 0, 0, 0, 0, 0, 0, 0},
            {0, 8, 7, 0, 0, 0, 0, 3, 1},
            {0, 0, 3, 0, 1, 0, 0, 8, 0},
            {9, 0, 0, 8, 6, 3, 0, 0, 5},
            {0, 5, 0, 0, 9, 0, 6, 0, 0},
            {1, 3, 0, 0, 0, 0, 2, 5, 0},
            {0, 0, 0, 0, 0, 0, 0, 7, 4},
            {0, 0, 5, 2, 0, 6, 3, 0, 0}};

    if(SolveGrid(grid)){
        for(int i=0;i<grid.size();i++){
            for(int j=0;j<grid[0].size();j++){
                cout<<grid[i][j];
            }

            cout<<endl;
        }
    }
    return 0;
}
