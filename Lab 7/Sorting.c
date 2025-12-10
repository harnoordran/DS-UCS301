#include <stdio.h>
#include <stdbool.h>


using namespace std;


void swap(int& a,int& b){
	int temp = a;
	a = b;
	b = temp;
	
}

void bubble_sort(int arr[], int n){
	for(int i=0;i<n-1;i++){
		for(int j=0;j<n-1-i;j++){
		
		if(arr[j] > arr[j+1]){
			swap(arr[j],arr[j+1]);
		}
		
	}	
}	
}

void insertion_sort(int a[],int n){
	for(int i=1;i<n;i++){
		
		int temp = a[i];
		int j = i;
		while(j > 0 and a[j-1] > temp){
			a[j] = a[j-1];
			j--;
		}
		
		a[j] = temp;
	}
	
	
}


void selection_sort(int arr[],int n){
	int min;
	
	for(int i=0;i<n-1;i++){
		min = i;
		
		for(int j=i+1;j<n;j++){
			if(arr[min] > arr[j]){
				min = j;
			}
			
		}
		if(min != i){
			int temp = arr[min];
			arr[min] = arr[i];
			arr[i] = temp;
		}
	}
}


int partition(int arr[], int p,int r){
	int pivot = arr[r];
	int i = p -1;
	for(int j = p;j<r;j++){
		if(arr[j] < pivot || arr[j] == pivot){
			
			i++;
			

			int temp = arr[j];
			arr[j] = arr[i];
			arr[i] = temp;
				
			
			
		
}
			
		
	}
	
	int t = arr[i+1];
	arr[i+1] = arr[r];
	arr[r] = t;
	
	return i+1;
}



void quick(int arr[],int start, int end){
	
	if(start < end){
		int p = partition(arr,start,end);
		quick(arr,start,p-1);
		quick(arr,p+1,end);
		
	}
	
	
	
}

void mergeSort(int arr[], int L,int M,int R){
	
	int n1 = (M-L) +1;
	int n2 = (R-M);
	
	int l[n1],r[n2];
	for(int i=0;i<n1;i++){
		l[i] = arr[L+i];
	}
	for(int j=0;j<n2;j++){
		r[j] = arr[M + 1 + j];
	}
	
	
	int i=0,j=0,k=L;

	 
	while(i <n1 && j < n2){
		if(l[i] <= r[j]){
			arr[k] = l[i];
			i++;
			k++;
		}
		else{
			arr[k] = r[j];
			k++;
			j++;
		}
	}
	
	while(i<n1){
		arr[k] = l[i];
		i++;
		k++;
	}

	while(j<n2){
		arr[k] = r[j];
		j++;
		k++;
	}
}

void merge(int arr[],int start,int end){
	
	if(start < end){
		int mid = (start + end)/2;
		
		merge(arr,start,mid);
		merge(arr,mid+1,end);
		
		mergeSort(arr,start,mid,end);
	}
}

int main(){
	int n =5;
	int arr[n] = {1,2,4,5,3};
	
	int choice;
	
	
	printf("Choose the sorting algorithm: ");
	
	printf("1. Bubble Sort\n 2. Insertion Sort\n 3. Selection Sort\n 4. Quick Sort\n 5. Merge Sort\n");
	
	scanf("%d",&choice);
	switch(choice){
		case 1:
			bubble_sort(arr,n);
			break;
			
		case 2:
			insertion_sort(arr,n);
			break;
			
		case 3:
			selection_sort(arr,n);
			break;

		case 4:
			quick(arr,0,n-1);
			break;
			
					
		case 5:
			
			merge(arr,0,n-1);
			break;
			
		default:
			printf("Please enter a valid option");

			
	}
	
	printf("\nThe sorted array is as: \n");
	
	
	for(int i =0;i<n;i++){
		
		printf("%d ",arr[i]);
	}
	
}
