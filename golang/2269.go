package main

import "strconv"

// 2269. Find the K-Beauty of a Number


func divisorSubstrings(num int, k int) int {
	count := 0
	numStr := strconv.Itoa(num)
	for i := 0; i <= len(numStr)-k; i++ {
		subStr := numStr[i : i+k]
		subNum, _ := strconv.Atoi(subStr)
		if subNum == 0 {
			continue
		}
		if num%subNum == 0 {
			count++
		}
	}
	return count
}