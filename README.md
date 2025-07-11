# 📊 LeetCode Problem: Increasing Triplet Subsequence

## 🧩 Problem Statement

Given an integer **array** `nums`, return `true` if there exists a **triple** of indices `(i, j, k)` such that `i < j < k` and `nums[i] < nums[j] < nums[k]`.

> **Note :**
> - If no such **indices** exists, return `false`.



## 🧠 Approach: Greedy with Two Markers

- Use two variables: first, second to track smallest & second smallest numbers.

- Traverse the array:

> - If current < first, update first
> - Else if current < second, update second
> - Else → found a third number → return true

- If loop ends, return false



## ✅ Example Walkthrough

### Example 1

##### Input: nums = [1,2,3,4,5]
##### Output: true

##### Explanation: 
<pre> 
  Any triplet where i < j < k is valid.
  
</pre>

### Example 2

##### Input: nums = [5,4,3,2,1]
##### Output: false

##### Explanation: 
<pre> 
  No triplet exists.
  
</pre>

### Example 3

##### Input: nums = [2,1,5,0,4,6]
##### Output: true

##### Explanation: 
<pre> 
  The triplet (3, 4, 5) is valid because nums[3] == 0 < nums[4] == 4 < nums[5] == 6.
  
</pre>

## 🛠️ Constraints

- `1 <= nums.length <= 5 * 10^5`
- `-2^31 <= nums[i] <= 2^31 - 1`
