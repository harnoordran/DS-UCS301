#include <stdio.h>

int main(){
	char s1[100];
	int len=0;
	
	printf("Enter the string to be reversed: ");
	scanf("%s", &s1);
	
	while(s1[len] != '\0'){
		len++;
		
	}
	
	int i=0, j = len -1;
	while(i!=j){
		char temp = s1[i];
		s1[i] = s1[j];
		s1[j] = temp;
		i++;
		j--;

		
	}
	
	printf("The reversed string is %s", s1);
	
	
	
	
	
	
	
	
}