#include<stdio.h>>
int main() {
    int mat1[100][100],mat2[100][100],mat3[100][100];
    int i,j,k,row1,clm1,row2,
    clm2;
    printf("Enter the number of rows for mat1: ");
    scanf("%d",&row1);
    printf("Enter the number of columns for mat1: ");
    scanf("%d",&clm1);
    printf("Enter the number of rows for mat2: ");
    scanf("%d",&row2);
    printf("Enter the number of columns for mat2: ");
    scanf("%d",&clm2);
    printf("Enter the elements for matrix1: \n");
    for(i=0;i<row1;i++) {
        for(j=0;j<clm1;j++) {
            scanf("%d",&mat1[i][j]);
        }
    }
    printf("Enter the elements for matrix2: \n");

    for(i=0;i<row2;i++) {
        for(j=0;j<clm2;j++) {
            scanf("%d",&mat2[i][j]);
        }
    }
    printf("\nElements of matrix1 are: \n");
    for(i=0;i<row1;i++) {
        for(j=0;j<clm1;j++) {
            printf(" %d ",mat1[i][j]);
        }
        printf("\n");
    }
    printf("\nElements of matrix2 are: \n");
    for(i=0;i<row2;i++) {
        for(j=0;j<clm2;j++) {
            printf(" %d ",mat2[i][j]);
        }
        printf("\n");
    }
    for(i=0;i<row1;i++) {
        for(j=0;j<clm1;j++) {
                mat3[i][j]=0;
            for(k=0;k<clm2;k++) {
                mat3[i][j]+=mat1[i][k]*mat2[k][j];
            }
        }
    }
    printf("\nResult of multiplication of matrix1 and matrix2: \n");
    for(i=0;i<row1;i++) {
        for(k=0;k<clm2;k++) {
            printf(" %d ",mat3[i][k]);
        }
        printf("\n");
    }
    return 0;
}
