# include <bits/stdc++.h>
using namespace std;


void PermutationHelper(vector<string>& result,string& str,int index,string currstr){


    if(index==str.size()){
        result.push_back(currstr);
        return;
    }
    for(int i=0;i<str.size();i++){
        currstr.push_back(str[i]);
        PermutationHelper(result,str,index+1,currstr);
        currstr.pop_back();


    }
}

vector<string>Permutation(string str){

    vector<string> result={};

    if(str.empty())
        return result;

    PermutationHelper(result,str,0,"");
}

int main(){

    string str="ABC";

    vector<string> result=Permutation(str);

    for(int i=0;i<result.size();i++){
        cout<<result[i]<<endl;
    }


    return 0;
}
