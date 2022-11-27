class Solution:
    def threeSum(self, nums: List[int]) -> List[List[int]]:
        nums.sort()
        result=[]
        
        for index,value in enumerate(nums):
            if(index>0 and value==nums[index-1]):
                continue
            leftPointer=index+1
            rightPointer=len(nums)-1
            while(leftPointer<rightPointer):
                sumOfNumbers=value+nums[leftPointer]+nums[rightPointer]
                if(sumOfNumbers==0):
                    result.append([value,nums[leftPointer],nums[rightPointer]])
                    leftPointer+=1
                    while nums[leftPointer]==nums[leftPointer-1] and leftPointer<rightPointer:
                        leftPointer+=1
                elif(sumOfNumbers>0):
                    rightPointer-=1
                else:
                    leftPointer+=1
            
        return result