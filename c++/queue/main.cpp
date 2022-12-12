#include <iostream>
#include "DoublyLinkedList.h"

int main() {
  DoublyLinkedList<int> dls;
  cout<<"Is the List Empty ?"<<dls.empty()<<endl;
  dls.push(20);
  dls.push(21);
  dls.push(50);
  dls.push(3);
  dls.push(50);
  dls.push(48);
  dls.print();
  cout<<"Is the List Empty ?"<<dls.empty()<<endl;
  cout<<"Front data"<<dls.front()<<endl;
  cout<<"Back Data"<<dls.back()<<endl;
  cout<<"The size of the queue is "<<dls.Size()<<endl;
  cout<<"----------------"<<endl;
  dls.pop();
  dls.print();
}