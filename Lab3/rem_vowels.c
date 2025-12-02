#include <stdio.h>


int main(){
	char s1[100],s2[100];
	int len=0, j = 0;
	
	printf("Enter the string: ");	
	scanf("%s", &s1);
	
	while(s1[len] != '\0'){
		len++;	
	}
	
	for(int i=0; i< len;i++){
		
		if(s1[i] != 'a' && s1[i] != 'e' && s1[i] != 'i' && s1[i] != 'o' && s1[i] != 'u'){
			s2[j] = s1[i];
			j++;
			
		}
	}

	printf("The new string after removal of vowels is: %s", s2);
	
		
}
