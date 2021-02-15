# include <bits/stdc++.h>
using namespace std;

int AlterSorting(vector<int>& arr){
    int n=arr.size();

    sort(arr.begin(),arr.end());
    int i=0;
    int j=n-1;

    while(i<j){
        cout<<arr[j--]<<arr[i++];
    }
    if(n%2!=0)
        cout<<arr[j];

    return 0;
}

int main(){

    vector<int> arr={7, 1, 2, 3, 4, 5};
    AlterSorting(arr);
    return 0;
}

