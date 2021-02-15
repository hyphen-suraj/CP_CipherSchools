# include <bits/stdc++.h>
using namespace std;

int search(vector<int>& arr,int x){

    int low=0;
    int high=arr.size()-1;

    while(low<high){
        int mid=low+(high-low)/2;
        if(arr[mid]==x)
            return mid;

        if(arr[low]<arr[mid]){

            if(arr[mid]>x && x>=arr[low])
                high=mid-1;
            else
                low=mid+1;

        }
        else{

            if(arr[mid]<x && arr[high]>=x)
                low=mid+1;
            else
                high=mid-1;

        }




    }

}

int main(){

    vector<int> arr={5, 6, 7, 8, 9, 10, 1, 2, 3};
    int x=10;

    cout<<search(arr,x);


    return 0;
}
