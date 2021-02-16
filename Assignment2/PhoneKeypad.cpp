# include <bits/stdc++.h>
using namespace std;

vector<string> keypad ={"", "", "abc", "def", "ghi", "jkl", "mno", "pqrs", "tuv", "wxyz"};

void printkey(string digits,vector<string>& res,int index,string str){

    if(index==digits.size()) {
        res.push_back(str);
        return;

    }

    string possibleMove=keypad[digits[index]-'0'];


    for(int i=0;i<possibleMove.size();i++){
        str.push_back(possibleMove[i]);
        printkey(digits,res,index+1,str);

        str.pop_back();

    }


}

void pad(string digits){

    vector<string> res={};
    if(digits.empty())
        cout<<"";



    printkey(digits,res,0,"");


    for(int i=0;i<res.size();i++){
        cout<<res[i]<<endl;
    }



}


int main(){

  string digits="456";
  pad(digits);



    return 0;
}
