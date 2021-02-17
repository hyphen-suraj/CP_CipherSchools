# include <bits/stdc++.h>
using namespace std;

int factorial(int n){
    if(n<=1)
        return 1;

    return  n*factorial(n-1);


}


int CountPath(int r,int c){

    return factorial(r+c-2)/(factorial(r-1)*factorial(c-1));
}
int main(){

    cout<<CountPath(2,3);

    return 0;
}
