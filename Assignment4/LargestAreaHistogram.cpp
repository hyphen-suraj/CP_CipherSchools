# include <bits/stdc++.h>
using namespace std;

int LargestArea(vector<int>& arr){
    stack<int>temp;
    int n=arr.size();

    int maxarea=0;
int area=0;
    for(int i=0;i<n;i++){
        while(temp.empty()== false && arr[temp.top()]>=arr[i]){
            int tp=temp.top();
            temp.pop();

            area=arr[tp]*(temp.empty()?i:(i-temp.top()-1));

            maxarea=max(maxarea,area);



        }

        temp.push(i);




    }

    while (temp.empty()== false){
        int tp=temp.top();
        temp.pop();
         area=arr[tp]*(temp.empty()?n:(n-temp.top()-1));
        maxarea=max(maxarea,area);
    }
return maxarea;
}

int main(){

    vector<int>arr={2,1,5,6,2,3};

    cout<<LargestArea(arr);

    return 0;
}
