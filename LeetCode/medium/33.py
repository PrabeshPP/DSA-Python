class Solution:
    def search(self,nums:List[int],target:int)->int:
        if(nums[0]<nums[len(nums)-1]):
            return self.binarySearch(nums,target)
        else:
            pivotIndex=self.pivotPoint(nums)
            number1=self.binarySearch(nums,target,0,pivotIndex)
            number2=self.binarySearch(nums,target,pivotIndex+1,len(nums)-1)

            if(number1 !=-1):
                return number1
            elif(number2 !=-1):
                return number2
            else:
                return -1
    


    def pivotPoint(self,nums):
        start=0
        end=len(nums)-1
        while(start<=end):
            mid=int(start+(end-start)/2)
            if(mid>start and nums[mid-1]>nums[mid]):
                return mid-1
            elif(mid<end and nums[mid]>nums[mid+1]):
                return mid
            else:
                if(nums[start]<=nums[mid]):
                    start=mid+1
                else:
                    end=mid-1
        return -1
    
    def binarySearch(self,arr,target,first,last):
        start=first
        end=last
        while(start<=end):
            mid=int(start+(end-start)/2)
            if(arr[mid]==target):
                return mid
            elif(arr[mid]>target):
                end=mid-1
            else:
                start=mid+1
        return -1