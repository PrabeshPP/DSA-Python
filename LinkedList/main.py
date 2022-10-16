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
    
    
    llist.printList()
    
    