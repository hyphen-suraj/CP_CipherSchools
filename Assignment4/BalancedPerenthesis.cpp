# include <bits/stdc++.h>
using namespace std;

bool check(char str,char tp){

    if((str==')' && tp=='(') || (str=='}' && tp=='{') || (str==']' && tp=='[')) {


        return true;

    }

    return false;

}

bool isBalanced(string &str){
    stack<char>st;
    for(int i=0;i<str.size();i++){

        if(str[i]=='(' || str[i]=='{' || str[i]=='[' ) {


            st.push(str[i]);





        }

        else{
            char tp=st.top();
            st.pop();


            if( check(str[i],tp)== false) {


                return false;

            }


        }
    }
    if(st.empty()== false)
        return false;

    return true;

}

int main(){

    string str="[()]{}{[()()]()}";

    cout<<isBalanced(str);


    return 0;
}
