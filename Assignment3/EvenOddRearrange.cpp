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

Node* EvenOdd(Node* head){
    Node* curr=head;
    head=head->next;

    Node* Odd=curr;
    Node* oddtemp=Odd;

    curr=head;
    head=head->next;

    Node* Even=curr;
    Node* eventemp=Even;

    int flag=1;

    while(head){
        curr=head;
        head=head->next;
        if(flag){
            oddtemp->next=curr;
            oddtemp=oddtemp->next;
            flag=0;

        }
        else{
            eventemp->next=curr;
            eventemp=eventemp->next;
            flag=1;


        }
    }

    oddtemp->next=Even;
    eventemp->next=NULL;
    return Odd;

}

int main(){

    Node* head=new Node(7);
    head->next=new Node(8);
    head->next->next=new Node(9);
    head->next->next->next=new Node(2);
    head->next->next->next->next=new Node(1);


   Node*result= EvenOdd(head);

    while (result!=NULL){
        cout<<result->value;
        result=result->next;
    }
    return 0;
}