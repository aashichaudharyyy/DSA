1class Solution:
2    def twoSum(self, nums: List[int], target: int) -> List[int]:
3        numMap = {}
4        n = len(nums)
5
6        for i in range(n):
7            complement = target - nums[i]
8            if complement in numMap:
9                return [numMap[complement], i]
10            numMap[nums[i]] = i
11
12        return [] 
13        