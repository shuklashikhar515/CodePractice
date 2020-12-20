#include<stdio.h>
int main() {
    int mat1[100][100],row,clm,i,j;
    printf("Enter the number of rows for matrix: ");
    scanf("%d",&row);
    printf("\nEnter the number of columns for matrix: ");
    scanf("%d",&clm);
    printf("\nEnter the digits: \n");
    for(i=1;i<=row;i++) {   //For Row
        for(j=1;j<=clm;j++) {   //For column
            scanf("%d",&mat1[i][j]);
        }
    }
    for(i=1;i<=row;i++) {   //For Row
        for(j=1;j<=clm;j++) {   //For column
            printf("  %d  ",mat1[i][j]);
        }
        printf("\n");
    }
    return 0;
}
