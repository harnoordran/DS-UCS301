#include <stdio.h>
#include <stdbool.h>


void swap(int* arr, int i, int j) {
	int temp = arr[i];
	arr[i] = arr[j];
	arr[j] = temp;
}

void bubbleSort(int arr[], int n) {
	bool swapped;

	for (int i = 0; i < n - 1; i++) {
		swapped = false;
		for (int j = 0; j < (n - i - 1); j++) {
			if (arr[j] > arr[j + 1]) {

				swapped = true;
				swap(arr, j, j + 1);

			}
		}

		if (swapped == false) {
			break;
		}
	}
}

int main() {


	int numbers[] = {
		1,23,21,5
	};

	int n = sizeof(numbers) / sizeof(numbers[0]);

	printf("The original array is: \n");
	for (int i = 0; i < n; i++) {
		printf("%d \n", numbers[i]);

	}




	bubbleSort(numbers, n);

	printf("The sorted array is: \n");
	for (int i = 0; i < n; i++) {
		printf("%d \n", numbers[i]);

	}




	return 0;
}

