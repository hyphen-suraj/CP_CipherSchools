# include <bits/stdc++.h>
using namespace std;

bool issafe(vector<vector<bool>>& board, int row,int col,int n){

    for(int i=0;i<col;i++){
        if(board[row][i])
            return false;
    }

    for(int r=row,c=col;r>=0 && c>=0;r--,c--){
        if(board[r][c])
            return false;
    }

    for(int r=row,c=col;r<n && c>=0;r++,c--){
        if(board[r][c])
            return false;

    }

    return true;
}


bool NqueenHelper(vector<vector<bool>>& board, int c,int n){

    if(c>=n) {

        return true;

    }

    for(int i=0;i<n;i++){

        if(issafe(board,i,c,n)){
            board[i][c]=true;


            if(NqueenHelper(board,c+1,n)){
                return true;
            }


            board[i][c]=false;


        }


    }

    return false;

}

bool NqueenBoard(int n){

    vector<vector<bool>>board(n,vector<bool>(n,false));

    if(NqueenHelper(board,0,n)) {


        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {

                cout << board[i][j] << " ";

            }

            cout << "\n";
        }

        return true;

    }

    return false;
}


int main(){

    int n=4;
    NqueenBoard(n);
    return 0;
}
