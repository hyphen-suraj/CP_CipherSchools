# include <bits/stdc++.h>

using namespace std;

int main(){
    vector<int> arr={0,1,0,0,1,1,1,1};
    int low=0;
    int high=arr.size()-1;
    while(low<high){
        if(arr[low]==1 && arr[high]==1) {
           arr[low]=0;
           arr[high]=1;
            low++;
            high--;


        }

        else if(arr[low]==0)
            low++;
        else
            high--;
    }

    for(int i=0;i<arr.size();i++){
        cout<<arr[i];
    }

    return 0;
}
