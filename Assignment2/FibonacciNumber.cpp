# include <bits/stdc++.h>
using namespace std;

int fibonacci(int x){
    if(x<=1)
        return x;

    return fibonacci(x-1)+fibonacci(x-2);

}

int main(){

    int x=3;
    cout<<fibonacci(x);

    return 0;
}
