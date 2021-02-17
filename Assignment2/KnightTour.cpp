# include <bits/stdc++.h>
using namespace std;

int boardsize=8;


int possibleMoves = 8;
int xMoves[8] = {2, 1, -1, -2, -2, -1, 1, 2};
int yMoves[8] = {1, 2, 2, 1, -1, -2, -2, -1};

bool issafe(vector<vector<int >> &board,int r,int c){
    if(r>=0 && r<boardsize && c>=0 && c<boardsize && board[r][c]==0)
        return true;

    return false;


}


bool knighttourHelper(vector<vector<int >> &board,int r,int c,int count){

    if(count=boardsize*boardsize){

        cout<<count;
        return true;
    }


    for(int i=0;i<possibleMoves;i++){

        r+=xMoves[i];
        c+=yMoves[i];

        if(issafe(board,r,c)){

            board[r][c]=count;
            if(knighttourHelper(board,r,c,count+1)){
                return true;
            }
            else{
                board[r][c]=0;

            }
        }
    }

}
bool knighttour(){
    if(boardsize<=0)
        return false;

    vector<vector<int >>board(boardsize,vector<int>(boardsize,0));
    board[0][0]=1;

    if(knighttourHelper(board,0,0,2)){
        return true;
    }

    return false;

}

int main(){


    knighttour();
    return 0;
}
