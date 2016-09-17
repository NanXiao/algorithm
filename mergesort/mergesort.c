#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int *merge(int *first, int n1, int *second, int n2) {
	int *p = NULL;
	int *result = calloc(sizeof(int), n1 + n2);
	if (result == NULL) {
		return NULL;
	}
	p = result;

	while ((n1 > 0) && (n2 > 0)) {
		if (*first < *second) {
			*p++ = *first++;
			n1--;
		} else {
			*p++ = *second++;
			n2--;
		}
	}

	if (n1 > 0) {
		memcpy(p, first, sizeof(int) * n1);
	}

	if (n2 > 0) {
		memcpy(p, second, sizeof(int) * n2);
	}

	return result;
}

void mergeSort(int *array, int n) {
	int *result = NULL;

	if (n <= 1) {
		return;
	}

	mergeSort(array, n / 2);
	mergeSort(array + n / 2, n - n / 2);
	
	result = merge(array,  n / 2, array + n / 2, n - n / 2);
	if (result != NULL) {
		memcpy(array, result, sizeof(int) * n);
		free(result);
	}
	return;
}

int main(void)  {
	int i = 0;
	int array[] = {5, 4, 9, 6, 2, 10, 11};
	mergeSort(array, sizeof(array) / sizeof(array[0]));
	for (i = 0; i < sizeof(array) / sizeof(array[0]); i++) {
		printf("%d ", array[i]);
	}
	printf("\n");
	return 0;
}

