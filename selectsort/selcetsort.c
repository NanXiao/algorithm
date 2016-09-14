#include <stdio.h>

void selectSort(int *array, int n) {
	int i = 0;
	int j = 0;
	int min_index = 0;
	int temp = 0;
	
	if ((NULL == array) || (n <= 1)) {
		return;
	}
	
	for (i = 0; i < n - 1; i++) {
		min_index = i;
		
		for (j = i + 1; j < n; j++) {
			if (array[j] < array[min_index]) {
				min_index = j;
			}
		}
		
		if (i != min_index) {
			temp = array[i];
			array[i] = array[min_index];
			array[min_index] = temp;
		}
	}
	
	return;
}
int main(void) {
	int i = 0;
	int array[] = {5, 9, 2, 2, 10, 1};
	selectSort(array, sizeof(array)/sizeof(array[0]));
	for (i = 0; i < sizeof(array)/sizeof(array[0]); i++) {
		printf("%d", array[i]);
		if (i != sizeof(array)/sizeof(array[0]) - 1) {
			printf(",");
		}
	}
	printf("\n");
	return 0;
}
