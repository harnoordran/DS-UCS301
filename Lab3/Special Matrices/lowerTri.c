#include <stdio.h>
#define MAX 3

int main(){
	int i, j, k=0;
	int size = (MAX*(MAX+1))/2;
	int arr[size];
	printf("Enter elements(row major): ");
	for(i=0; i< size; i++){
		scanf("%d", &arr[i]);		
	}
	
	printf("The lower triangular matrix is: ");
	for(i=0;i<MAX;i++){
		for(j=0;j<MAX;j++){
			if(i<j){
				printf("0");
			}
			else{
				printf("%d",arr[k]);
				k++;
			}
		}
		printf("\n");
	}
}