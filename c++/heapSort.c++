#include <iostream>
#include <stack>
using namespace std;

// struct Queue{
//   private:
//   stack<int> enqueueStack;
//   stack<int> dequeueStack;
//   public:

//   void enqueue(int value){
//     enqueueStack.push(value);
//   }

//   int dequeue(){
//     if(dequeueStack.empty()){
//         while(!enqueueStack.empty()){
//           int value=enqueueStack.top();
//           enqueueStack.pop();
//           dequeueStack.push(value);
//         }
//     }
//     int result=dequeueStack.top();
//     dequeueStack.pop();
//     return result;
//   }
// };


// int main() {
//   Queue queue;
//   queue.enqueue(4);
//   queue.enqueue(5);
//   queue.enqueue(6);
//   cout<<queue.dequeue()<<endl;
//   cout<<"-------------------------"<<endl;
//   queue.enqueue(7);
//   queue.enqueue(8);
//   cout<<queue.dequeue()<<endl;
//   cout<<queue.dequeue()<<endl;
//   cout<<queue.dequeue()<<endl;
//   cout<<queue.dequeue()<<endl;
// }

#include <iostream>
using namespace std;



//Heap Sort Algorithm
void heapify(int arr[],int N,int i){
   int largest = i;
 
    // left = 2*i + 1
    int l = 2 * i + 1;
 
    // right = 2*i + 2
    int r = 2 * i + 2;
 
    // If left child is larger than root
    if (l < N && arr[l] > arr[largest])
        largest = l;
 
    // If right child is larger than largest
    // so far
    if (r < N && arr[r] > arr[largest])
        largest = r;
 
    // If largest is not root
    if (largest != i) {
        swap(arr[i], arr[largest]);
 
        // Recursively heapify the affected
        // sub-tree
        heapify(arr, N, largest);
    }
}

void heapSort(int arr[],int N){
     for(int i=(N/2)-1;i>=0;i--){
        heapify(arr, N, i);
    }

    for(int i=N-1;i>0;i--){
      swap(arr[0],arr[i]);
      heapify(arr, i, 0);
    }

}

void print(int arr[],int N){
  for(int i=0;i<N;i++){
    cout<<arr[i]<<" ";
  }
}

int main(){
  int arr[]={1,2,3,4,5,99,6,101,40};
  int N=sizeof(arr)/sizeof(arr[0]);
  heapSort(arr, N);
  print(arr,N);
  
  
}