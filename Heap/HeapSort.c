#include <stdio.h>


void swap(int* a, int* b){
	int temp = *a;
	*a = *b;
	*b = temp;
}

void heapify(int arr[], int n, int i){
	int left = 2*i+1;
	int right = 2*i + 2;
	int max = -1;
	
	if(left < n && right < n){
		max = (arr[left] > arr[right] ? left : right);
		
	}
	else if(left < n){
		max = left;
	}
	
	if(max != -1 && arr[i] < arr[max]){
		swap(&arr[i],&arr[max]);
		
		heapify(arr,n,max);
		
	}
}

void heapSort(int arr[], int n){
	
	for(int i=n/2 - 1;i>=0;i--){
		heapify(arr,n,i);
	}
	
	for(int i=n-1; i>0;i--){
		swap(&arr[0],&arr[i]);
		
		heapify(arr,i,0);
	}
}


void printArray(int arr[], int n){
	for(int i=0;i<n;i++){
		printf("%d", arr[i]);
	}
	printf("\n");
}


int main(){
	int arr[5] = {4,2,8,3,5};
	
	int n = sizeof(arr)/sizeof(arr[0]);
	
	printf("Original array: \n");
	printArray(arr,n);
	
	heapSort(arr,n);
	
	printf("Sorted array: \n");
	printArray(arr,n);
	
	return 0;
}