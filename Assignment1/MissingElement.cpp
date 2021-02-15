# include <bits/stdc++.h>
using namespace std;

int MissingNum(vector<int> arr){
    int n=arr.size()+1;
    int x=1;
    int y=arr[0];
    for(int i=2;i<=n;i++){
        x = x ^ i;
    }

    for(int i=1;i<arr.size();i++){
        y = y ^ arr[i];
    }

    return (x^y);
}

int main(){
    vector<int> arr={ 1, 2, 4, 5, 6 };
    cout<<MissingNum(arr);

    return 0;
}

