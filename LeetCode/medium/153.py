class Solution:
    def findMin(self,nums:List[int])-> int:
        if(nums[0]<nums[len(nums)-1]):
            return nums[0]
        pivotIndex=self.pivotPoint(nums)

        return nums[pivotIndex+1]
        
    

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