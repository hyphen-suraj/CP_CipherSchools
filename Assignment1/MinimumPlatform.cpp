# include <bits/stdc++.h>
using namespace std;


int PlatformCount(vector<int>& arr,vector<int>& dpt){

    sort(arr.begin(),arr.end());
    sort(dpt.begin(),dpt.end());

    int n=arr.size();
    int m=dpt.size();

    int result=1;
    int curr=1;

    int i=1;
    int j=0;

    while(i<n && j<m){
        if(arr[i]<dpt[j]){
            curr++;
            i++;
            result=max(result,curr);
        }

        else{
            curr--;
            j++;
            result=max(result,curr);
        }
    }

    return result;

}

int main(){

    vector<int>arrival={900, 940, 950, 1100, 1500, 1800};
    vector<int>dept={910, 1200, 1120, 1130, 1900, 2000};

    cout<<PlatformCount(arrival,dept);


    return 0;
}
