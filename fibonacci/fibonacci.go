package main

import "fmt"

func fibonacci(n int) uint {
	var op1 uint = 0
	var op2 uint = 1

	if n <= 1 {
		return uint(n)
	}

	for i := 2; i <= n; i++ {
		tmp := op1 + op2
		op1 = op2
		op2 = tmp
	}
	return op2
}

func main() {
	fmt.Println(fibonacci(2000000))
}
