# include <bits/stdc++.h>
using namespace std;

bool StreetParade(vector<int>& arr,int n){

    stack<int>temp;
    temp.push(-1);

    int index=0;
    int carno=1;

    while(index<arr.size() && carno<=n){


        if(temp.top()==carno){
            temp.pop();
            carno++;
        }

        else if(arr[index]==carno){
            index++;
            carno++;
        }

        else if(arr[index]>carno){
            temp.push(arr[index]);
            index++;
        }
        else
            break;




    }

    while (temp.empty()== false){
        if(temp.top()==carno) {
            temp.pop();
            carno++;

        }
        else
            break;
    }

    if(carno==n+1)
        return true;


    return false;





}


int main(){

    int n=5;
    vector<int>cars={5,1,2,4,3,6,7};

    if(StreetParade(cars,n))
        cout<<"yes";

    else
        cout<<"no";



    return 0;
}
