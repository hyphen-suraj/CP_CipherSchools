# include <bits/stdc++.h>
using namespace std;

void prevGreatestElement(vector<int>&arr){


    stack<int>st;
    for(int i=0;i<arr.size();i++){
        while (st.empty()== false && st.top()<=arr[i]){
            st.pop();

        }

        int pg=st.empty()?-1:st.top();
        cout<<pg<<endl;
        st.push(arr[i]);
    }



}

int main(){
    vector<int>arr={10, 4, 2, 20, 40, 12, 30};
    prevGreatestElement(arr);
    return 0;
}