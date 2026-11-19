// LAB 6, Q.NO.3. :-
// This program takes two 3×3 matrices as input and displays their sum and
// product.
#include<stdio.h>
#define ROWS 3
#define COLS 3
int main()
{
int matA[ROWS][COLS], matB[ROWS][COLS], 
sum[ROWS][COLS], product[ROWS][COLS];
//input for matrix 1
printf("Enter matrix A (3x3), row by row:\n");
for(int i = 0 ; i<ROWS ; i++)
for(int j = 0 ; j<COLS ; j++)
scanf("%d", &matA[i][j]);
//input for matrix 2
printf("Enter matrix A (3x3), row by row:\n");
for(int i = 0 ; i<ROWS ; i++)
for(int j = 0 ; j<COLS ; j++)
scanf("%d", &matB[i][j]);

// calculating sum of matrix 1 & 2
for(int i = 0; i<ROWS ; i++)
for(int j = 0 ; j<COLS ; j++)
sum[i][j] = matA[i][j] + matB[i][j];

// calculating product of matrix 1 & 2
for(int i = 0; i<ROWS ; i++){
for(int j = 0 ; j<COLS ; j++){
product[i][j]=0;
for(int k = 0 ; k<ROWS ; k++)
product[i][j] += matA[i][k] * matB[k][j];
}
}

printf("\nMATRIX A + MATRIX B =\n");
for(int i = 0 ; i<ROWS ; i++){
for(int j = 0 ; j<COLS ; j++)
printf("%6d ", sum[i][j]);
printf("\n");
}
printf("\nMATRIX A x MATRIX B =\n");
for(int i = 0 ; i<ROWS ; i++){
for(int j = 0 ; j<COLS ; j++)
printf("%6d ", product[i][j]);
printf("\n");
}
   return 0;
}