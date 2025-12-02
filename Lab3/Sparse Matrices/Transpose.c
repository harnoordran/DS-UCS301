#include <stdio.h>
#define MAXSIZE 100

void printMatrix(int matrix[][3],int rows,int cols,int values){
	printf("The triplet matrix is as: \n");
	for(int i=0 ;i <values;i++){
		for(int j=0;j<3;j++){
			printf("%-3d",matrix[i][j]);
		}
		printf("\n");
		
		
	}
	
}

void inputMatrix(int matrix[][3],int rows,int cols,int values){	
	
	printf("Enter the values of the triplet: \n");
	
	for(int i=0 ;i <values;i++){
		printf("Enter the %dst entry: ",i+1);
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


int main(){
	int matrix[MAXSIZE][3];
	int transpose[MAXSIZE][3];
	
	int rows, cols, values;
	
	printf("Enter the value of rows, cols and values: ");
	scanf("%d %d %d",&rows, &cols, &values);
	
	inputMatrix(matrix, rows,cols, values);
	transposeMatrix(matrix,transpose,rows,cols,values);
	
	printMatrix(transpose, rows,cols, values);

}