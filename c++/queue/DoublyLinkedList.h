#include "Node.h"
#include "iostream"
using namespace std;

template <class T>
class DoublyLinkedList{
    private:
      Node<T>* head;
      Node<T>* tail;
      int size;
    public:
      DoublyLinkedList();
      int Size();
      bool empty();
      T back();
      T front();
      void pop();
      void push(T data); 
      void print();
};

template<class T>
DoublyLinkedList<T>::DoublyLinkedList(){
  this->head=NULL;
  this->tail=NULL;
  this->size=0;
}

//Code to push the data into the queue from scratch
template<class T>
void DoublyLinkedList<T>::push(T data){
  size++;
  Node<T>* nodeToAdd=new Node<T>;
  nodeToAdd->data=data;
  nodeToAdd->next=NULL;
  
  if(head==NULL){
    nodeToAdd->prev=NULL;
    head=nodeToAdd;
  }else if(head!=NULL && head->next==NULL){
      nodeToAdd->prev=head;
      this->head->next=nodeToAdd;
      this->tail=nodeToAdd;
  }else{
    this->tail->next=nodeToAdd;
    nodeToAdd->prev=this->tail;
    this->tail=nodeToAdd;
  }
}

template<class T>
void DoublyLinkedList<T>::print(){
  Node<T>* currNode=head;
  while(currNode!=NULL){
    cout<<currNode->data<<endl;
    currNode=currNode->next;
  }
}

template<class T>
void DoublyLinkedList<T>::pop(){
  size--;
  Node<T>* nodeToRemove=head;
  this->head=nodeToRemove->next;
  delete nodeToRemove;
  nodeToRemove=NULL;
}

template<class T>
T DoublyLinkedList<T>::front(){
   return head->data; 
}

template<class T>
T DoublyLinkedList<T>::back(){
  return tail->data;
}

template<class T>
int DoublyLinkedList<T>::Size(){
  return size;
}

template<class T>
bool DoublyLinkedList<T>::empty(){
  return head==NULL?true:false;
}