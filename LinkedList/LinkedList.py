from IntNode import Node

class LinkedList:
    def __init__(self) -> None:
        self.head=None
        
    #adding to the front of the Linked List
    def addToFront(self,data):
        nodeToAdd=Node(data)
        nodeToAdd.next=self.head
        self.head=nodeToAdd
        
        
        
    #Traversing the LinkedList
    def printList(self):
        temp=self.head
        while(temp!=None):
            print(temp.data)
            temp=temp.next
            
            