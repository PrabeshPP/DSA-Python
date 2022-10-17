from dataclasses import dataclass


class Node:
    def __init__(self,data,prev,next) -> None:
        self.data=data
        self.prev=None
        self.next=None