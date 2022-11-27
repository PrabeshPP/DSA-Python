class Solution:
    def twoSum(self, numbers: List[int], target: int) -> List[int]:
        lowPointer=0
        highPointer=len(numbers)-1
        while(numbers[lowPointer]+numbers[highPointer]!=target):
            if(numbers[lowPointer]+numbers[highPointer]<target):
                lowPointer+=1
            else:
                highPointer-=1
        return [lowPointer+1,highPointer+1]