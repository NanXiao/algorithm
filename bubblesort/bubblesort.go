package main

import "fmt"

func bubbleSort(s []int) {
	if len(s) == 0 {
		return
	}

	for i := 0; i < len(s)-1; i++ {
		swap := false
		for j := 0; j < len(s)-i-1; j++ {
			if s[j] > s[j+1] {
				temp := s[j]
				s[j] = s[j+1]
				s[j+1] = temp
				swap = true
			}
		}
		if !swap {
			break
		}
	}
}

func main() {
	array := []int{5, 4, 3, 2, 1}
	bubbleSort(array)
	fmt.Println(array)
}
