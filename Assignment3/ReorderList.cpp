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


Node* reorder(Node* head){
    Node*root=head;
    int count=0;


    Node* front=NULL;
    Node* top;
    while(root){
        Node*temp=new Node(root->value);


        if(front==NULL){
            front=temp;
            top=front;


        }
        else{
            front->next=temp;
            front=front->next;
        }

        root=root->next;
        count++;


    }



    Node* end=ReverseList(head);

    Node* result=NULL;
    Node* res;

int x=count/2;

    while (x--){
        Node* temp1=new Node(top->value);
        Node* temp2=new Node(end->value);


        if(result==NULL){
            result=temp1;
            res=result;
            result->next=temp2;
            result=result->next;
        }
        else{
            temp1->next=temp2;

            result->next=temp1;

            result=result->next->next;
        }
        top=top->next;
        end=end->next;



    }
    if(count%2!=0){
        result->next=new Node(top->value);
    }



    return res;

}

int main(){
    Node* head=new Node(5);
    head->next=new Node(8);
    head->next->next=new Node(6);
    Node* temp=head->next->next->next=new Node(2);
    temp->next=new Node(5);
    temp->next->next=new Node(0);
    temp->next->next->next=new Node(1);


    Node*result=reorder(head);
    while (result){
        cout<<result->value;
        result=result->next;
    }
    return 0;
}

