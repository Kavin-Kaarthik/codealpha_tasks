#include<iostream>
using namespace std;
class Node{
    int data;
    Node* next;


Node(int data)
{
    this-> data=data;
    this ->  next=NULL;

}
};
void Insert(Node* &head,int d){
    Node* temp=new Node(d);
    temp->next=head;
    head=temp;
}void print(Node* &head){

    Node* temp =head;
    while(temp!=NULL){
        cout<<temp->data<<"";
        temp=temp->next;
    }
}



int main(){
Node* node1= new Node(10);

 
Node* head=node1;

Insert(head,12);
print(head);
   
}