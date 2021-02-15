
//Check if two people starting from different points ever meet



# include <bits/stdc++.h>

using namespace std;

bool EverMeet(int x1,int v1,int x2,int v2){
    if((x1<x2 && v1<=v2) || (x2<x1 && v2<=v1) )
        return false;


    if (x1 < x2)
    {
        swap(x1, x2);
        swap(v1, v2);
    }

    return ((x1 - x2) % (v1 - v2) == 0);

}

int main(){

    int x1 = 5, v1 = 8, x2 = 4, v2 = 7;

   if(EverMeet(x1,v1,x2,v2))
       cout<<"yes";

   else
       cout<<"no";


    return 0;

}


//The time complexity of this algorithm is O(1)