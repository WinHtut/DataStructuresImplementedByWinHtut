// Linked List data structure

#include "iostream"
using namespace std;

class Node{
public:
    int data;
    int data2;

    Node* next;
};

void push(Node** head_ref , int newData){

    Node* new_node = new Node();
    new_node->data = newData;

    new_node->next = (*head_ref);

    (*head_ref) = new_node;

}

void append(Node** head_ref , int new_data){
    Node* new_node = new Node();
    Node* last = *head_ref;

    new_node->data = new_data;
    new_node->next = NULL;

    if(*head_ref == NULL){

        *head_ref=new_node;
        return;
    }

    while (last->next != NULL){
        last = last->next;
    }
    last->next =new_node;
    return;
}

// int a=NULL;  int b =NULL;
// normal pointer stored address of variable
// Node -> next -> Node->next -> Node ->next -> Node -> next-> null;


void dt_print(Node* node){
    while ( node != NULL){
        cout<<node->data <<" ";
        node = node->next;// second
    }

}

int main(){
    Node* head=NULL;
    Node* second=NULL;
    Node* third=NULL;

    head = new Node();
    second = new Node();
    third = new Node();

    head->data = 1;

    head->next = second;

    second->data=2;

    second->next = third;

    third-> data =3 ;

    third->next =NULL;

    cout<<"Before push"<<endl;
    dt_print(head);
    cout<<" "<<endl;

    push(&head , 100);
    cout<<"After push"<<endl;
    dt_print(head);


    push(&head , 101);
    cout<<"After push"<<endl;
    dt_print(head);

    append(&head , 111);

    cout<<" "<<endl;
    cout<<"After append"<<endl;
    dt_print(head);

    cout<<" "<<endl;
    cout<<"After append2"<<endl;
    append(&head , 222);
    dt_print(head);

    return 0;
}
