#include<stdio.h>
int main() {
    int mat1[100][100],mat2[100][100],sum[100][100],row1,clm1,row2,clm2,i,j;
    printf("Enter the number of rows for matrix1: ");
    scanf("%d",&row1);
    printf("\nEnter the number of columns for matrix1: ");
    scanf("%d",&clm1);
    printf("\nEnter the number of rows for matrix2: ");
    scanf("%d",&row2);
    printf("\nEnter the number of columns for matrix2: ");
    scanf("%d",&clm2);

    if(row1==row2&&clm1==clm2) {
        printf("\nEnter the elements for matrix 1 : \n");
        for(i=1;i<=row1;i++) {   //For Row
            for(j=1;j<=clm1;j++) {   //For column
                scanf("%d",&mat1[i][j]);
            }
        }
        printf("\nEnter the elements for matrix 2: \n");
        for(i=1;i<=row2;i++) {   //For Row
            for(j=1;j<=clm2;j++) {   //For column
                scanf("%d",&mat2[i][j]);
            }
        }
        printf("\nElements of matrix 1: \n");
        for(i=1;i<=row1;i++) {   //For Row
            for(j=1;j<=clm1;j++) {   //For column
                printf("  %d  ",mat1[i][j]);
            }
            printf("\n");
        }
        printf("\nElements of matrix 2: \n");
        for(i=1;i<=row2;i++) {   //For Row
            for(j=1;j<=clm2;j++) {   //For column
                printf("  %d  ",mat2[i][j]);
            }
            printf("\n");
        }
            //Adding the 2 matrix
            for(i=1;i<=row2;i++) {   //For Row
                for(j=1;j<=clm2;j++) {   //For column
                    sum[i][j]= mat1[i][j] + mat2[i][j];
                }
            }
            //output of the addition of 2 matrices
            printf("\nSum of matrix1 and matrix2 is: \n");
            for(i=1;i<=row2;i++) {   //For Row
                for(j=1;j<=clm2;j++) {   //For column
                    printf("  %d  ",sum[i][j]);
                }
            printf("\n");
            }
    }
    else{
        printf("\nError: Since the number of rows and columns in matrix1 and matrix2 are not equal. \nSo the two matrices can't be added.\n ");
    }
    return 0;
}
