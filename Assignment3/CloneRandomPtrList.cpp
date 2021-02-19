# include <bits/stdc++.h>
using namespace std;



Node* CloneList(Node* head){
    Node* root=head;
    while(head->next !=NULL){

        Node* Next=head->next;
        head->next=new Node(head->value);
        head->next->next=Next;


    }
    Node* curr=root;
    while(curr->next->next!= NULL){
        curr->next->rendom=curr->rendom->next;
    }

    Node* temp=root->next;
    Node* result=temp;

    while(temp->next!=NULL){
        temp->next=temp->next->next;
        temp=temp->next;
    }

return result;

}

int main(){

    CloneList(head);

    return 0;
}


