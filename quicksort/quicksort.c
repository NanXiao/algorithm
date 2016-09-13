#include <stdio.h>

void QuickSort(int *array, int n) {
	int i = 0;
	int pivot = 0;
	int low = 0;
	int high = n - 1;
	
	if ((NULL == array) || (n <= 1)) {
		return;
	}
	
	pivot = array[0];
	while (low <= high) {
		while ((low < high) && (array[high] > pivot)) {
			high--;
		}
		if (low == high) {
			array[low] = pivot;
			break;
		} else {
			array[low] = array[high];
		}
		
		while ((low < high) && (array[low] < pivot)) {
			low++;
		}
		if (low == high) {
			array[low] = pivot;
			break;
		} else {
			array[high] = array[low];
		}
	}
	
	QuickSort(array, low);
	QuickSort(&array[low + 1], n - low - 1);
}
int main(void) {
	int i = 0;
	int array[] = {6, 4, 7, 9, 3, 2, 1, 8, 5};
	QuickSort(array, sizeof(array)/sizeof(array[0]));
	for (i = 0; i < sizeof(array)/sizeof(array[0]); i++) {
		printf("%d", array[i]);
		if (i != sizeof(array)/sizeof(array[0]) - 1) {
			printf(",");
		}
	}
	printf("\n");
	return 0;
}
