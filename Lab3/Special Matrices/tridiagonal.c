#include <stdio.h>
#define MAX 3

int main(){
	
	int i, j, k=0;
	int size = (3*MAX)-2;
	int arr[size];
	printf("Enter elements(row major): ");
	for(i=0; i< size; i++){
		scanf("%d", &arr[i]);		
	}
	
	printf("The tridaignoal matrix is: \n");
	
	for(i=0;i<MAX;i++){
		for(j=0;j<MAX;j++){
			if(i-j==-1 || i-j==0 || i-j == 1){
				printf("%d", arr[k]);
				k++;
			}
			else{
				printf("0");
			}
		}
		printf("\n");
	}
	
	
	
	
	
	return 0;
}