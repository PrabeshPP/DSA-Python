class Solution:
    def maxProduct(self, nums: List[int]) -> int:
        res=max(nums)
        currMin=1
        currMax=1
        for i in nums:
            if(i==0):
                currMin=1
                currMax=1
                continue
            temp=currMax*i
            currMax=max(currMax*i,currMin*i,i)
            currMin=min(temp,currMin*i,i)
            res=max(currMax,currMin,res)
        return res