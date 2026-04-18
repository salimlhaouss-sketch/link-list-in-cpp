#include <iostream>
using namespace std;
struct node {
    int data; 
    node*next;
};
void salim (node*head , int value){
    node * newnode = new node();
    newnode->data = value ;
    newnode->next = head ;
    head = newnode ;
} 
void delete_node (node*head , int value){
    node*temp = head ; 
    if (temp != NULL && temp->data == value ){
        head = temp->next ;
        delete temp ;
        return ;
    }
}
void print_list (node*head){
    node*temp = head ;
    while (temp != NULL ){
        cout << temp->data << " " ;
        temp = temp->next ;
    }
    cout << endl ;
}
int main (){
    node*head = NULL ;
    salim(head , 1);
    salim(head , 2);
    salim(head , 3);
    print_list(head);
    delete_node(head , 2);
    print_list(head);
    return 0 ;
}