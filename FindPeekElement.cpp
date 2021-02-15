# include <bits/stdc++.h>

using namespace std;

int FindPeek(int arr[],int n,int low,int high){

    int mid=low+(high-low)/2;
    if ((mid == 0 || arr[mid - 1] <= arr[mid]) &&
        (mid == n - 1 || arr[mid + 1] <= arr[mid])){
        cout<<arr[mid];
        return 0;
    }


    else if(arr[mid-1]>=arr[mid])
        FindPeek(arr,n,low,mid-1);

    else
        FindPeek(arr,n,mid+1,high);



}

int main(){


    int arr[] = { 1, 3, 20, 4, 1, 0 };
    int n = sizeof(arr) / sizeof(arr[0]);
    FindPeek(arr,n,0,n-1);
    return 0;
}


//Time Complexity: O(Logn)