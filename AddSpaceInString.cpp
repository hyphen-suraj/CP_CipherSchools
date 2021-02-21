# include <bits/stdc++.h>
using namespace std;

bool isVowel(char a){
    unordered_set<char> map;
    map.insert('A');
    map.insert('E');
    map.insert('I');
    map.insert('O');
    map.insert('U');

    if(map.find(a)==map.end())
        return false;

    return true;

}
void AddSpace(string  str,int index){
    if(index>=str.size()){
        cout<<str<<endl;
        return;
    }


    if(isVowel(str[index])){

        AddSpace(str,index+1);


    }
    else{



        AddSpace(str,index+1);

        string x;


            x=str.substr(0, index)+" "+str.substr(index, str.size()-index);




        AddSpace(x,index+2);






    }
}

int main(){

    string str="BAC";
    AddSpace(str,0);

    return 0;
}
