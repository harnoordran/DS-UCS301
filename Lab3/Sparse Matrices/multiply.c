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

void transposeMatrix(int matrix[][3],int transpose[][3],int rows,int cols,int values){
	
	
	int k =0;
	for(int j =0;j<cols;j++){
		for(int i=0;i<values;i++){
			if(matrix[i][1] == j){
				transpose[k][0] = matrix[i][1];
				transpose[k][1] = matrix[i][0];
				transpose[k][2] = matrix[i][2];
				
				k++;
			}
			
		}
		 		
	}
	
}

void multiplyMatrix(int A[][3], int B[][3],result[][3]){
	
	int i=1,j=1;
	while(i <= A[0][2] && j <= B[0][2]){
		if(A[i][0] == B[j][0]){
			
		}
	}
	
	
}




int main(){
	int A[MAXSIZE][3];
	int B[MAXSIZE][3];
	int transpose[MAXSIZE][3];
	
	int result[MAXSIZE][3];
	
	int rows, cols, values;
	
	printf("Enter the value of rows, cols and values: ");
	scanf("%d %d %d",&rows, &cols, &values);
	
	inputMatrix(A, rows,cols, values);
	inputMatrix(B, rows,cols, values);
	transposeMatrix(B, transpose,rows,cols,values);
	
	sumMatrix(A,B,sum);

	
	

	


}