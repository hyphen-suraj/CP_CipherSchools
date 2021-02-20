# include <bits/stdc++.h>
using namespace std;

void InsStack(stack<int>&result,int arr,int & min){

    if(result.empty()){
        result.push(arr);
        min=arr;

    } else if(arr>=min)
            result.push(arr);
        else{
            int x=2*arr-min;
            result.push(x);
            min=arr;
        }





}

void DelStack(stack<int>&result,int & min){


   int t=result.top();
    result.pop();
   if(t<=min){
       min=2*min-t;


   }




}

int main(){

    stack<int>res;
    int min=INT_MAX;


    InsStack(res,2,min);
    cout<<min;
    InsStack(res,1,min);
    cout<<min;
    InsStack(res,5,min);
    cout<<min;
    DelStack(res,min);
    cout<<min;
    DelStack(res,min);
    cout<<min;
    return 0;
}

