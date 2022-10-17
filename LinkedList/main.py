from IntNode import Node
from LinkedList import LinkedList




if __name__=="__main__":
    llist=LinkedList()
    llist.head=Node(3)
    secondNode=Node(10)
    thirdNode=Node(20)
    
    
    # Linking two nodes
    llist.head.next=secondNode
    secondNode.next=thirdNode
    
    #adding node at the front of the linked list
    llist.addToFront(300)
    llist.addToFront(2)
    llist.addToFront(700)
    
    #adding node at the back of the linked list
    llist.addToBack(55)
    llist.addToBack(555)
    llist.addToBack(5555)
    
    
    
    #printing all the Node of the Linked List
    llist.printList()
    
    