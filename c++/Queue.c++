// implementation of queue using only two stacks in C++ Programming language.

#include <iostream>
#include <stack>
using namespace std;

struct Queue{
  private:
  stack<int> enqueueStack;
  stack<int> dequeueStack;
  public:

  void enqueue(int value){
    enqueueStack.push(value);
  }

  int dequeue(){
    if(dequeueStack.empty()){
        while(!enqueueStack.empty()){
          int value=enqueueStack.top();
          enqueueStack.pop();
          dequeueStack.push(value);
        }
    }
    int result=dequeueStack.top();
    dequeueStack.pop();
    return result;
  }
};


int main() {
  Queue queue;
  queue.enqueue(4);
  queue.enqueue(5);
  queue.enqueue(6);
  cout<<queue.dequeue()<<endl;
  cout<<"-------------------------"<<endl;
  queue.enqueue(7);
  queue.enqueue(8);
  cout<<queue.dequeue()<<endl;
  cout<<queue.dequeue()<<endl;
  cout<<queue.dequeue()<<endl;
  cout<<queue.dequeue()<<endl;
}