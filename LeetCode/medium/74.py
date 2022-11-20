class Solution:
    
    def binarySearch(self,start,end,arr,target):
        while(start<=end):
            mid=int(start+(end-start)/2)
            if(arr[mid]==target):
                return True
            elif(arr[mid]>target):
                end=mid-1
            else:
                start=mid+1
        return False
    
    def searchMatrix(self, matrix: List[List[int]], target: int) -> bool:
        firstRow=0
        lastRow=len(matrix)-1
        midCol=int((len(matrix[0])-1)/2)

        if(len(matrix)==1):
            return self.binarySearch(0,len(matrix[0])-1,matrix[0],target)
        
        while(firstRow<lastRow-1):
            midRow=int(firstRow+(lastRow-firstRow)/2)
            if(matrix[midRow][midCol]==target):
                return True
            elif(matrix[midRow][midCol]>target):
                lastRow=lastRow-1
            else:
                firstRow=firstRow+1
        
        return self.binarySearch(0,len(matrix[firstRow])-1,matrix[firstRow],target) or self.binarySearch(0,len(matrix[lastRow])-1,matrix[lastRow],target)



   