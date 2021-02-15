# include <bits/stdc++.h>

using namespace std;


int main(){

    vector<int> a={2,0,0,2,2,1,0,0,2,2};

    int lo=0;
    int mid=0;
    int hi=a.size()-1;

    while (mid <= hi) {
        switch (a[mid]) {

            // If the element is 0
            case 0:
                swap(a[lo++], a[mid++]);
                break;

                // If the element is 1 .
            case 1:
                mid++;
                break;

                // If the element is 2
            case 2:
                swap(a[mid], a[hi--]);
                break;
        }
    }

    for(int i=0;i<a.size();i++){
        cout<<a[i];
    }
    return 0;
}

