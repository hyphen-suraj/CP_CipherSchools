# include <bits/stdc++.h>
using namespace std;


void BalancedParaHelper(vector<string>&result,int open,int close,int n,string  str){
    if(open<0 ||close<0 || open>n || close>n ||close>open)
        return ;

    if(open==n && close==n) {
        result.push_back(str);


    }

    BalancedParaHelper(result,open+1,close,n,str+"(");
    BalancedParaHelper(result,open,close+1,n,str+")");
}

vector<string> BalancedPara(int n){


    vector<string>result;

    BalancedParaHelper(result,0,0,n,"");


    return result;
}


int main(){
    int n=5;
    vector<string>result=BalancedPara(n);
    for(int i=0;i<result.size();i++){
        cout<<result[i]<<endl;
    }

    return 0;
}

