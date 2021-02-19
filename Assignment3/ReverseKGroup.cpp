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

Node* ReverseList(Node* head){
    Node* prev=NULL;

    while(head!=NULL){

        Node* curr=head;
        head=head->next;
        curr->next=prev;
        prev=curr;
    }


    return prev;
}

Node* reverseKGroup(Node* head,int k){

    int count=k-1;
    if(head==NULL){
        return NULL;
    }

    Node* root=head;
    while(count-- && head->next!=NULL){
        head=head->next;
    }
    Node* curr=head;

    if(head->next!=NULL)
        head=head->next;
    else
        head=NULL;


    curr->next=NULL;



    Node* temp;
    Node* result;
    temp=result=ReverseList(root);



    while (temp->next!=NULL){
        temp=temp->next;

    }


    temp->next=reverseKGroup(head,k);


    return result;


}

int main(){
    int k=3;

    Node* head=new Node(5);
    head->next=new Node(8);
    head->next->next=new Node(6);
    Node* temp=head->next->next->next=new Node(2);
    temp->next=new Node(5);
    temp->next->next=new Node(0);
    temp->next->next->next=new Node(1);


   Node*res= reverseKGroup(head,k);
    while (res){
        cout<<res->value<<" ";
        res=res->next;
    }
    return 0;
}

