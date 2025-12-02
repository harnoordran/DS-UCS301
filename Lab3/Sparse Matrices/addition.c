#include <stdio.h>
#define MAXSIZE 100

void printMatrix(int matrix[][3],int rows,int cols,int values){
	printf("The triplet matrix is as: \n");
	for(int i=0 ;i <=values;i++){
		for(int j=0;j<3;j++){
			printf("%-3d",matrix[i][j]);
		}
		printf("\n");
		
		
	}
	
}

void inputMatrix(int matrix[][3],int rows,int cols,int values){	
	matrix[0][0] = rows;
	matrix[0][1] = cols;
	matrix[0][2] = values;
	
	printf("Enter the values of the triplet: \n");
	
	for(int i=1 ;i<=values;i++){
		printf("Enter entry %d: ",i);
		for(int j=0;j<3;j++){
			scanf("%d",&matrix[i][j]);
		}
		
		
	}
	

	
	printMatrix(matrix, rows,cols, values);
	
}


void sumMatrix(int A[][3],int B[][3],int sum[][3])
{
	
	
	sum[0][0] = A[0][0];
	sum[0][1] = A[0][1];
	sum[0][2] = 0;
	int k=1;
	int i = 1, j =1;
	
	while(i<=A[0][2] && j<=B[0][2])
	{
		
		if(A[i][0] == B[j][0])
		{
			
			if(A[i][1] == B[j][1]){
				sum[k][0] = A[i][0];
                sum[k][1] = A[i][1];
				sum[k][2] = A[i][2] + B[j][2];
				if(sum[k][2] != 0){
					
					sum[0][2]++;
					k++;
					
				}
				i++;
				j++;
				
			}
			else{
				if(A[i][1] < B[j][1]){
					sum[k][0] = A[i][0];
                	sum[k][1] = A[i][1];
					sum[k][2] = A[i][2];
					sum[0][2]++;
					i++;
					k++;
					
				
				}
				else{
					sum[k][0] = B[j][0];
                	sum[k][1] = B[j][1];
					sum[k][2] = B[j][2];
					sum[0][2]++;
					j++;
					k++;
					
					
				
				}
				
			}
		}
		else{
			if(A[i][0] < B[j][0]){
					sum[k][0] = A[i][0];
                	sum[k][1] = A[i][1];
					sum[k][2] = A[i][2];
					sum[0][2]++;
					i++;
					k++;
				
			}
			else{
				
					sum[k][0] = B[j][0];
                	sum[k][1] = B[j][1];
					sum[k][2] = B[j][2];
					sum[0][2]++;
					j++;
					k++;
			
			}
			
		}
}
	while(i <= A[0][2]){
			
					
					sum[k][0] = A[i][0];
                	sum[k][1] = A[i][1];
					sum[k][2] = A[i][2];
					sum[0][2]++;
					i++;
					k++;
			
		
		}
		while(j <= B[0][2]){
					sum[k][0] = B[j][0];
                	sum[k][1] = B[j][1];
					sum[k][2] = B[j][2];
					sum[0][2]++;
					j++;
					k++;
			
		}
	
	printf("The sum matrix is: \n");
	printMatrix(sum,sum[0][0],sum[0][1],sum[0][2]);
	
	
	
}




int main(){
	int A[MAXSIZE][3];
	int B[MAXSIZE][3];
	
	int sum[MAXSIZE][3];
	
	int rows, cols, values;
	
	printf("Enter the value of rows, cols and values: ");
	scanf("%d %d %d",&rows, &cols, &values);
	
	inputMatrix(A, rows,cols, values);
	inputMatrix(B, rows,cols, values);
	
	sumMatrix(A,B,sum);

	
	

	


}