# include <bits/stdc++.h>

using namespace std;

int first (vector<int>& arr,int x){
    int low=0;
    int high=arr.size()-1;

    while(low<high){
        int mid=low+(high-low)/2;

        if(mid==0 || arr[mid-1]<x && arr[mid]==x) {
            return mid;
        }

        else if(arr[mid]<x)
            low=mid+1;

        else
            high=mid-1;




        }
    return -1;
    }



int last(vector<int>& arr,int x)
{

    int low=0;
    int high=arr.size()-1;
    int n=arr.size()-1;

    while(low<high) {

        int mid = low + (high - low) / 2;

        if (  arr[mid] == x && mid==n || arr[mid+1]>x) {

            return mid;
        }
        else if (arr[mid] > x)
            high = mid - 1;

        else
            low=mid+1;




    }
    return -1;
    }

int main(){

    vector<int>arr={1,2,5,5,5,5,5,7,8,9};
    int x=5;
    int i=first(arr,x);
    int j=last(arr,x);

    cout<<i<<j;
    return 0;
}

