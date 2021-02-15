#include <bits/stdc++.h>

using namespace std;

int main(){

    vector<int> arr={7, 1, 5, 3, 6, 4};

    int Maxprofit=0;
    int minRate=INT_MAX;


    for(int i=0;i<arr.size();i++){
        if(minRate>arr[i]){
            minRate=arr[i];
        }
        else{
            Maxprofit=max(Maxprofit,arr[i]-minRate);
        }


    }



cout<<Maxprofit;


    return 0;
}
