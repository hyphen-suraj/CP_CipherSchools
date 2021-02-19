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

Node* RemoveDuplicate(Node* head){
    if (head == NULL || head->next == NULL)
        return head;
    Node * curr = head;
    Node * nxt = NULL;
    while (curr->next != NULL) {
        if (curr->value == curr->next->value) {
            nxt = curr->next;
            curr->next = nxt->next;
            delete nxt;
        } else {
            curr = curr->next;
        }
    }
    return head;


}


int main(){

    Node* head=new Node(5);
    head->next=new Node(8);
    head->next->next=new Node(8);
    head->next->next->next=new Node(9);

    Node* res=RemoveDuplicate(head);
    while (res){
        cout<<res->value;
        res=res->next;
    }
    return 0;
}

