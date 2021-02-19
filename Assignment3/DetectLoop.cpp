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


bool Detectloop(Node * head){
    Node* slow=head;
    Node* fast=head;

    while(fast!=NULL && fast->next!= NULL){
        slow=slow->next;
        fast=fast->next->next;

        if(slow==fast){

            return true;

        }
    }
    return false;

}

int main(){


    Node* head=new Node(5);
    head->next=new Node(8);
    head->next->next=new Node(6);
    head->next->next->next=new Node(4);
    head->next->next->next->next=head->next;
    cout<<Detectloop(head);
    return 0;

}
