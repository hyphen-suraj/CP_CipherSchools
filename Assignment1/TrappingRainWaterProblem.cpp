# include <bits/stdc++.h>

using namespace std;


int maxwater(vector<int>& arr){
    int n=arr.size();

    vector<int>rmax(n);
    rmax[n-1]=arr[n-1];
    for(int i=n-2;i>=0;i--){
        rmax[i]=max(rmax[i+1],arr[i]);

    }

    int lmax=arr[0];

    int totalRain=0;

    for(int i=0;i<n;i++){
        lmax=max(lmax,arr[i]);

        totalRain+=min(lmax,rmax[i])-arr[i];

    }

    return totalRain;
}

int main(){


    vector<int> arr={0, 1, 0, 2, 1, 0, 1, 3, 2, 1, 2, 1};
    cout<<maxwater(arr);


    return 0;
}
