# include <bits/stdc++.h>
using namespace std;

struct Node{
    int value;
    Node* next;

    Node(int x){
        value=x;
        next=NULL;

    }
};

int  FindIntersection(Node* head1,Node* head2){


    Node* root1=head1;
    Node*  root2=head2;
    int m=0;
    int n=0;

    while(head1!=NULL || head2!=NULL){


        if(head1!=NULL){
            m++;
            head1=head1->next;
        }


        if(head2!=NULL){
            n++;
            head2=head2->next;
        }

    }

    if(m>n){
        int x=m-n;
        while(x--){

            root1=root1->next;
        }
    }



    if(m<n){
        int x=n-m;
        while(x--)
            root2=root2->next;
    }

    while(root1 != root2){
        root1=root1->next;
        root2=root2->next;


    }

    return root1->value;


}


int main(){

    Node* head1=new Node(5);
    head1->next=new Node(8);
    head1->next->next=new Node(6);
    head1->next->next->next=new Node(4);


    Node* head2=new Node(8);
    head2->next=new Node(7);
    head2->next->next=new Node(5);
    head2->next->next->next=head1->next->next;


    cout<<FindIntersection(head1,head2);

    return 0;
}
