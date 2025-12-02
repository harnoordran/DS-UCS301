#include <stdio.h>
#define MAX 3

int main(){
	
	int arr[MAX], i;
	printf("Enter elements(row major): ");
	for(i=0; i< MAX;i++){
		scanf("%d", &arr[i]);		
	}
	
	for(i=0; i< MAX; i++){
		for(int j=0;j<MAX;j++){
			if(i==j){
				printf("%d",arr[i]);
			}
			else{
				printf("0");
			}
		}
		printf("\n");
		
	}
	
	
	return 0;
}