from IntNode import Node

class LinkedList:
    def __init__(self) -> None:
        self.head=None
        
    #adding to the front of the Linked List
    def addToFront(self,data):
        nodeToAdd=Node(data)
        nodeToAdd.next=self.head
        self.head=nodeToAdd
        
    # adding to the back of the Linked List
    
    def addToBack(self,data):
        temp=self.head
        
        nodeToAddBack=Node(data)
        
        #finding the last element in LinkedList
        while(temp.next!=None):
            temp=temp.next
        
        temp.next=nodeToAddBack
        nodeToAddBack.next=None
        
        
        
        
            
        
        
        
    #Traversing the LinkedList
    def printList(self):
        temp=self.head
        while(temp!=None):
            print(temp.data)
            temp=temp.next
            
            