# include <bits/stdc++.h>
using namespace std;


vector<string> mymap = {"", "A", "B", "C", "D", "E", "F", "G", "H", "I", "J", "K", "L", "M", "N", "O", "P", "Q", "R", "S", "T", "U", "V", "W", "X", "Y", "Z"};

void DecordStringHelper(vector<string>& result,string& digit,int index,string str){
    if(index==digit.size()){
        result.push_back(str);
        return;

    }

    int x=(int) digit[index]-'0';
    if(x==0)
        return;

    DecordStringHelper(result,digit,index+1,str+mymap[x]);

    if(index+1>= digit.size())
        return;

    int y=(int) digit[index+1]-'0';

    if(x*10+y<=26){
        DecordStringHelper(result,digit,index+2,str+mymap[x*10+y]);

    }



}
vector<string>DecordString(string digit){
    vector<string>result={};

    if(digit.empty())
        return result;

    DecordStringHelper(result,digit,0,"");
    return result;

}


int main(){

    string digit="123";

    vector<string>result=DecordString(digit);

    for(int i=0; i<result.size();i++){
        cout<<result[i]<<endl;
    }

    return 0;
}
