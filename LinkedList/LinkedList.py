class LinkedList:
    def __init__(self) -> None:
        self.head=None
        
    def printList(self):
        temp=self.head
        while(temp!=None):
            print(temp.data)
            temp=temp.next
            
            