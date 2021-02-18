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


int ReverseList(Node* head){
    Node* prev=NULL;

    while(head!=NULL){

        Node* curr=head;
        head=head->next;
        curr->next=prev;
        prev=curr;
    }

    while(prev){
        cout<<prev->value<<" ";
        prev=prev->next;
    }
    return 0;
}


int main(){

    Node* head=new Node(5);
    head->next=new Node(8);
    head->next->next=new Node(6);
    head->next->next->next=new Node(2);

    ReverseList(head);


    return 0;
}
