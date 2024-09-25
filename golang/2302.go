package main

func countSubarrays(nums []int, k int64) (ans int64) {
	sum, l := int64(0), 0
	for r, num := range nums {
	    sum += int64(num)
		for sum*int64(nums[r - l + 1]) >= k {
		    sum -= int64(nums[l])
		    l++
		}
		ans += int64(r - l + 1)
	}
	return
}
