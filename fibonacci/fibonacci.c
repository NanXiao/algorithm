#include <stdio.h>

unsigned long long fibonacci(unsigned int n) {
	unsigned int i = 0;
	unsigned long long op1  = 0;
	unsigned long long op2  = 1;
	unsigned long long tmp  = 1;
	
	if (n <= 1) {
		return n;
	}
	
	for (i = 2; i <= n; i++) {
		tmp = op1 + op2;
		op1 = op2;
		op2 = tmp;
	}
	
	return op2;
}
int main(void) {
	// your code goes here
	printf("%llu\n", fibonacci(2000000));
	return 0;
}
