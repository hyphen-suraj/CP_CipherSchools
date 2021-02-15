//Majority Element

# include <bits/stdc++.h>

using namespace std;

int FindCandidate(int a[], int size){

    int cand=a[0];
    int count=1;

    for(int i=1;i<size;i++){
        if(a[i]==cand)
            count++;
        else
            count--;


        if(count==0)
            cand=a[i];
    }

   return cand;
}

int FindMajority(int a[],int size){

   int candidate= FindCandidate(a,size);

   int count=0;

   for(int i=0;i<size;i++){
       if(a[i]==candidate)
           count++;
   }

   if(count>size/2)
       cout<<"YES";

   else
       cout<<"NO";


}

int main (){

    int a[] = { 1, 3, 3, 1, 2 };
    int size = (sizeof(a)) / sizeof(a[0]);

    FindMajority(a,size);


    return 0;


}


//Time Complexity: O(n)