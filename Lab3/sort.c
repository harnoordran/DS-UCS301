#include <stdio.h>



int main(){
	char s1[100],s2[100];
	int len=0, i = 0;
	
	printf("Enter the string: ");	
	scanf("%s", &s1);
	
	while(s1[len] != '\0'){
		len++;	
	}
	
	for(i;i < len; i++){
		for(int j=i;j<len;j++){
			if (s1[i] > s1[j]){
				char temp = s1[i];
				s1[i] = s1[j];
				s1[j]= temp;
				
			}
		}
		
	}
	
	printf("The sorted string is %s", s1);
}