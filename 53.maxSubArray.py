class Solution:
    def maxSubArray(self, nums):
        current_sum = nums[0]
        max_sum = nums[0]
        for i in range(1, len(nums)):
            current_sum = max(nums[i], current_sum + nums[i])
            max_sum = max(max_sum, current_sum)
        return max_sum

arr = [1, 6, -8, 2, 98, -4, 100]
print(Solution().maxSubArray(arr))
