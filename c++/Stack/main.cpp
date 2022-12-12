#include <iostream>
#include <stack>
#include <string>
#include "LinkedList.h"
using namespace std;

int main() {
  LinkedList<int> ls;
  ls.push(20);
  ls.push(30);
  ls.push(70);
  ls.push(40);
  ls.push(55);
  ls.print();
  cout<<"-----****-----"<<endl;
  cout<<ls.pop()<<endl;
  cout<<"------****-----"<<endl;
  ls.print();
  cout<<"------****-----"<<endl;
  cout<<"The size of the stack is "<<ls.Size()<<endl;
  cout<<"The top element is "<<ls.top()<<endl;
  return 0;
}