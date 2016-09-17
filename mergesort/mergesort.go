package main

import "fmt"

func merge(first []int, second []int) (result []int) {

	for len(first) > 0 && len(second) > 0 {
		if first[0] < second[0] {
			result = append(result, first[0])
			first = first[1:]
		} else {
			result = append(result, second[0])
			second = second[1:]
		}
	}

	if len(first) > 0 {
		result = append(result, first...)
	}

	if len(second) > 0 {
		result = append(result, second...)
	}

	return
}

func mergeSort(array []int) {
	if len(array) <= 1 {
		return
	}

	mergeSort(array[:len(array)/2])
	mergeSort(array[len(array)/2:])

	copy(array, merge(array[:len(array)/2], array[len(array)/2:]))
	return
}

func main() {
	array := []int{5, 4, 9, 6, 2, 10, 11}
	mergeSort(array)
	fmt.Println(array)
}
