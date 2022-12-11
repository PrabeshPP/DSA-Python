#include<iostream>
using namespace std;

template<class T>
class Heap{
    private:
        T* arr;
        int capacity;
        int size;
        void expand();
        void heapify(int index);
        void swap(int* a,int* b);
    public:
        Heap(int capacity);
        ~Heap();
        void enqueue(T value);
        T dequeue();
        T peek();
        void print();


};

template<class T>
Heap<T>::Heap(int cap){
    this->capacity=cap;
    this->size=0;
    this->arr=new int[this->capacity];
}

// Destructor
template<class T>
Heap<T>::~Heap(){
    delete [] arr;
}

template<class T>
void Heap<T>::enqueue(T k){
    if(this->size==this->capacity){
        expand();
    }
    size++;
    int i=size-1;
    arr[i]=k;
    while(i>0 && arr[(i-1)/2]<arr[i]){
      swap(&arr[(i-1)/2],&arr[i]);
      i=(i-1)/2;
    }
}

template<class T>
T Heap<T>::dequeue(){
    T rootElement=this->arr[0];
    swap(&arr[0],&arr[size-1]);
    size--;
    heapify(0);
    return rootElement;
}

template<class T>
T Heap<T>::peek(){
    T rootElement=this->arr[0];
    return rootElement;
}

template<class T>
void Heap<T>::print(){
    for(int i=0;i<size;i++){
        cout<<arr[i]<<endl;
    }
}

template<class T>
void Heap<T>::heapify(int index){
    int largest=index;
    int leftIndex=index*2+1;
    int rightIndex=index*2+2;

    if(leftIndex<size && arr[leftIndex]>arr[largest]){
        largest=leftIndex;
    }

    if(rightIndex<size && arr[rightIndex]>arr[largest]){
        largest=rightIndex;
    }

    if(largest!=index){
        swap(&arr[largest],&arr[index]);
        heapify(largest);
    }
}

template<class T>
void Heap<T>::expand(){
    this->capacity*=2;
    int* newArr=new int[this->capacity];
    for(int i=0;i<this->size;i++){
        newArr[i]=this->arr[i];
    }
    delete [] this->arr;
    this->arr=newArr;
}

template<class T>
void Heap<T>::swap(int* a,int* b){
    int temp=*a;
    *a=*b;
    *b=temp;
}