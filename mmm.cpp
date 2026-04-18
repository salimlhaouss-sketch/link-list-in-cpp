#include <stdio.h>
using namespace std ;
 
struct node {
    int data ;
    node *next ;

}
void chenge (node*& head , int value){
    node * newnode = new node ();
     newnode -> data = value ;
     newnode -> next = head   ; 
     newnode = head ; 

} 
void delete_node (node*& head , int value){
    node*temp = head ; 
    node*prev = NULL ;
    if (temp != NULL && temp->data == value){
        head = temp->next ;
        delete temp ; 
        return ; 
    }
    while(temp != NULL && temp -> data != value ){
        prev = temp ;
        temp = temp -> next ;
    }
    if (temp == NULL ) return ;
    prev -> next = temp -> next ;
    delete temp ;
}
void print_list (node *&head){
    node*temp = head ;
    while (temp != NULL ){
        cout << temp -> data << '\n' ;
        temp = temp -> next ;
    }
}