# include <bits/stdc++.h>
using namespace std;

int MaxSum(vector<int>& arr){

    int result=arr[0];
    int currSum=arr[0];

    for(int i=1;i<arr.size();i++){
        if(currSum+arr[i]<arr[i]){
            currSum=arr[i];
            result=max(result,currSum);

        }

        else{
            currSum+=arr[i];
            result=max(result,currSum);
        }

    }

    return result;

}

int main(){


    vector<int>arr={-2, -3, 4, -1, -2, 1, 5, -3};
    cout<<MaxSum(arr);

    return 0;

}
