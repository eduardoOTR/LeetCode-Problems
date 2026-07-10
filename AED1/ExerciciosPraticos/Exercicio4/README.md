# Eduardo Ortiz de Tunes Ramos

# 18. 4Sum

Given an array nums of n integers, return an array of all the unique quadruplets [nums[a], nums[b], nums[c], nums[d]] such that:
    0 <= a, b, c, d < n
    a, b, c, and d are distinct.
    nums[a] + nums[b] + nums[c] + nums[d] == target

You may return the answer in any order.


Example 1:
    Input: nums = [1,0,-1,0,-2,2], target = 0
    Output: [[-2,-1,1,2],[-2,0,0,2],[-1,0,0,1]]

Example 2:
    Input: nums = [2,2,2,2,2], target = 8
    Output: [[2,2,2,2]]

Example 3:
    Input: nums = [-2,0,0,0,2,3,3,5,8], target = 8
    Output: [[-2,0,2,8],[-2,2,3,5],[0,0,0,8],[0,0,3,5],[0,2,3,3]]
 

Constraints:
    1 <= nums.length <= 200
    -109 <= nums[i] <= 109
    -109 <= target <= 109
