# include <bits/stdc++.h>

using namespace std;

int merge(vector<int>& arr1,vector<int>& arr2){

    int n=arr1.size();
    int m=arr2.size();

    vector<int>result(n+m);

    int i=0,j=0;
    int x=0;

    while(i<n && j<m){
        if(arr1[i]<=arr2[j]){
            result[x]=arr1[i];
            i++;
            x++;
        }
        else{
            result[x]=arr2[j];
            j++;
            x++;
        }
    }

    while (i<n){
        result[x]=arr1[i];
        i++;
        x++;
    }
    while (j<m){
        result[x]=arr2[j];
        j++;
        x++;
    }

    for(int i=0;i<m+n;i++){
        cout<<result[i];
    }
    return 0;
}


int main(){
    vector<int>arr1={1, 3, 4, 5};
    vector<int>arr2={2, 4, 6, 8};

    merge(arr1,arr2);
    return 0;
}