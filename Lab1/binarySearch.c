
#include <stdio.h>


//int binarySearch(int arr[], int high, int n) {
//	int low = 0;
//
//	while (low < high) {
//		mid = (low + high) / 2;
//		if (arr[mid] == n) {
//			return mid
//		}
//
//		else {
//			if (arr[mid] > n) {
//				high = mid - 1;
//
//			}
//			else {
//				low = mid + 1;
//			}
//		
//		}
//	}
//
//	return -1;
//
//
//
//}


int binarySearch(int arr[], int low, int high, int n) {

	if (low > high) {
		return -1;
	}
	int mid = (low + high) / 2;

	if (arr[mid] == n) {
		return mid;
	}
	else {
		if (arr[mid] < n) {
			return binarySearch(arr, mid + 1, high, n);
		}
		else {
			return binarySearch(arr, low, mid - 1, n);

		}
	}

}



int main() {

	int numbers[] = { 1,4,9, 57 };

	int sz = sizeof(numbers) / sizeof(numbers[0]);

	int idx = binarySearch(numbers, 0, sz - 1, 9);

	if (idx == -1) {
		printf("Element is not found");
	}
	else {
		printf("The index of the element is: %d", idx);

	}


	return 0;
}