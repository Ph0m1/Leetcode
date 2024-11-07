package main

func maxVowels(s string, k int) int {
	l := 0
	r := l + k

	score := make([]int, len(s))
	for i := 0; i <= len(s); i++ {
		if s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u' {
			score[i] = 1
		} else {
			score[i] = 0
		}
	}

	ans := 0
	for i := 0; i <= k; i++ {
		ans += score[i]
	}
	tmp := ans
	for r <= len(s) {
		tmp -= score[l] + score[r]
		ans = max(ans, tmp)
		l++
		r++
	}
	return ans
}
