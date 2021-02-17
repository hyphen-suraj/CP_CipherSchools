# include <bits/stdc++.h>
using namespace std;


int possibleMove=4;
vector<int>xMoves={1,-1,0,0};
vector<int>yMoves={0,0,1,-1};

bool issafe(vector<vector<int>> & visited,vector<vector<bool>>& maze,int x,int y,int R,int C){
    if(x>=0 && y>=0 && x<R && y<C && maze[x][y] && visited[x][y]== false){
        return true;
    }

    return false;
}


bool ratInMazeHelper(vector<vector<int>> & visited,vector<vector<bool>>& maze,int x,int y,int R,int C){

    if(x==R-1 && y==C-1 && maze[x][y]){
        return true;

    }

    if(issafe(visited,maze,x,y,R,C)){

        visited[x][y]= true;

        for(int i=0;i<possibleMove;i++){
            x=x+xMoves[i];
            y=y+yMoves[i];
            if(ratInMazeHelper(visited,maze,x,y,R,C)){
                return true;
            }
        }

        visited[x][y]= false;
        return false;

    }

    return false;

}

bool ratInMaze(vector<vector<bool>>& maze){

    if(maze.empty())
        return false;

    int R=maze.size();
    int C=maze[0].size();

    vector<vector<int>>visited(R,vector<int>(C,false));

    if(ratInMazeHelper(visited,maze,0,0,R,C))
        return true;

    return false;

}


int main(){

    vector<vector<bool>> maze = {
            {1, 0, 0, 0},
            {1, 1, 0, 1},
            {0, 1, 0, 0},
            {1, 1, 1, 1}};
    cout<<ratInMaze(maze);

    return 0;

}