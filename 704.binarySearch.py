class Solution:
    def search(self, nums, target):
        for i in range(len(nums)):
            if nums[i] == target:
                return i
        return -1
    
arr = [-1,0,3,5,9,12]
target = 9
print(Solution().search(arr, target))
