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

bool IsPalindrome(Node* head){
    Node* first=head;
    int count=0;

    while(head){
        count++;
        head=head->next;
    }

    head=first;


    int x=count/2;


    while(x--){
        head=head->next;

    }



    Node* root=NULL;


    if(count%2==0)
        root=head->next;

    else
        root=head->next;



    head->next=NULL;


    Node* second=ReverseList(root);

    while (first !=NULL && second !=NULL){
        if(first->value != second->value)
            return false;

        first=first->next;
        second=second->next;
    }

    return true;

}

int main(){

    Node* head=new Node(5);
    head->next=new Node(8);
    head->next->next=new Node(6);
    head->next->next->next=new Node(8);
    head->next->next->next->next=new Node(5);

    cout<<IsPalindrome(head);

    return 0;
}

