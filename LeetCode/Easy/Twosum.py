class Solution:
    def twoSum(self, nums: List[int], target: int) -> List[int]:
        dict={}
        for key,value in enumerate(nums):
            difference=target-value
            if difference in dict:
                return [dict[difference],key]
            dict[value]=key