package main

import "fmt"

func selectSort(s []int) {
	if len(s) <= 1 {
		return
	}

	for i := 0; i < len(s)-1; i++ {
		min_index := i
		for j := i + 1; j < len(s); j++ {
			if s[j] < s[min_index] {
				min_index = j
			}
		}
		if min_index != i {
			temp := s[min_index]
			s[min_index] = s[i]
			s[i] = temp
		}
	}
}

func main() {
	array := []int{5, 9, 3, 2, 2, 10, 11}
	selectSort(array)
	fmt.Println(array)
}
