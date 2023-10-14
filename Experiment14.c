/*write a program to check whether a given matrix is symmetric or not*/
#include <stdio.h>
int main() {
  int A[3][3], B[3][3];
  int row, col, isSym;
// Take a matrix A as input from user
  printf("Enter the elements in matrix of size 3x3: \n");
  for (row = 0; row < 3; row++) {
    for (col = 0; col < 3; col++) {
      scanf("%d", &A[row][col]);
    }
  }
// Finds the transpose of matrix A
  for (row = 0; row < 3; row++) {
    for (col = 0; col < 3; col++) {
      // Stores each row of matrix A to each column of matrix B
      B[row][col] = A[col][row];
    }
  }
// Checks whether matrix A is equal to its transpose or not
  isSym = 1;
  for (row = 0; row < 3 && isSym; row++) {
    for (col = 0; col < 3; col++) {
      if (A[row][col] != B[row][col]) {
        isSym = 0;
        break;
      }
    }
  }
 // If the given matrix is symmetric.
  if (isSym == 1) {
    printf("\n Matrix is Symmetric. \n");

    for (row = 0; row < 3; row++) {
      for (col = 0; col < 3; col++) {
        printf("%d ", A[row][col]);
      }

      printf("\n");
    }
  } else {
    printf("\n Matrix is not Symmetric.");
  }

  return 0;
}

