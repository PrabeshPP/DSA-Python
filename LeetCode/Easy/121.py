class Solution:
    def maxProfit(self, arr: List[int]) -> int:
        maxProfit=0
        minimumPrice=arr[0]
        for i in range(1,len(arr),1):
            if(arr[i]<minimumPrice):
                minimumPrice=arr[i]
            else:
                if(maxProfit<arr[i]-minimumPrice):
                    maxProfit=arr[i]-minimumPrice
        return maxProfit