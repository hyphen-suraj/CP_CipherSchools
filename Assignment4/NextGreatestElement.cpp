# include <bits/stdc++.h>
using namespace std;

void nextGreatestElement(vector<int>&arr){
    stack<int>temp;

    stack<int>st;
    for(int i=arr.size()-1;i>=0;i--){
        while (st.empty()== false && st.top()<=arr[i]){
            st.pop();

        }

        int ng=st.empty()?-1:st.top();
        temp.push(ng);
        st.push(arr[i]);
    }

    while(temp.empty()==false){
        cout<<temp.top()<<endl;
        temp.pop();
    }

}

int main(){
    vector<int>arr={11, 13, 21, 3};
    nextGreatestElement(arr);
    return 0;
}