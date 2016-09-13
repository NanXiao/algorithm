#include <stdio.h>

void BubbleSort(int *array, int n) {
	int i = 0;
	int j = 0;
	int tmp = 0;
	int swap = 0;
	
	if ((NULL == array) || (n <= 1)) {
		return;
	}
	
	for (i = 0; i <= n - 2 ; i++) {
		swap = 0;
		for (j = 0; j <= n - i - 2; j++) {
			if (array[j] > array[j + 1]) {
				tmp = array[j];
				array[j] = array[j + 1];
				array[j + 1] = tmp;
				swap = 1;
			}
		}
		if (0 == swap) {
			break;
		}
	}
}
int main(void) {
	int i = 0;
	int array[] = {5, 4, 3, 2, 1};
	BubbleSort(array, sizeof(array)/sizeof(array[0]));
	for (i = 0; i < sizeof(array)/sizeof(array[0]); i++) {
		printf("%d", array[i]);
		if (i != sizeof(array)/sizeof(array[0]) - 1) {
			printf(",");
		}
	}
	printf("\n");
	return 0;
}

