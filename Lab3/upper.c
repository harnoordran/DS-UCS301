#include <stdio.h>
#include <ctype.h>

int main(){
	char s1[100];
	int len=0;
	
	printf("Enter the string: ");	
	scanf("%s", &s1);
	
	while(s1[len] != '\0'){
		len++;	
	}
	
	for(int i=0;i <len;i++){
		if(islower(s1[i])){
			s1[i] = toupper(s1[i]);
			
		}
	}
	
	printf("The uppercase string is %s", s1);
}