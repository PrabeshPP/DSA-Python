#include "Node.h"
#include "iostream"
using namespace std;


template <class T>
class LinkedList{
  private:
    Node<T>* head;
    int size;
  public:
    LinkedList();
    int Size();
    void push(T data);
    T pop();
    T top();
    void print();
};

template <class T>
LinkedList<T>::LinkedList(){
  this->head=NULL;
  this->size=0;
}

template <class T>
void LinkedList<T>::push(T data){
  size++;
  Node<T>* nodeToAdd=new Node<T>;
  nodeToAdd->data=data;
  if(head==NULL){
    head=nodeToAdd;  
  }else{
    nodeToAdd->next=head;
    head=nodeToAdd;
  }
  
}

//For now, I am returning value from the pop method 
//This can be easily removed

template<class T>
T LinkedList<T>::pop(){
  size--;
  Node<T>* currNode=head;
  T retValue=currNode->data;
  head=currNode->next;
  delete currNode;
  currNode=NULL;
  return retValue;
}

template<class T>
T LinkedList<T>::top(){
    return head->data;
}

template <class T>
void LinkedList<T>::print(){
  Node<T>* currNode=this->head;
  while(currNode!=NULL){
    cout<<currNode->data<<endl;
    currNode=currNode->next;
  }
}

template< class T>
int LinkedList<T>::Size(){
  return this->size;
}