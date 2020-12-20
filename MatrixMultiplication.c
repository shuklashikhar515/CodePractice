#include <stdio.h>
int main()
{
    int i,j,k,r1,r2,c1,c2;
    printf("Enter the rows and columns of 1st matrix: ");
    scanf("%d %d",&r1,&c1);
    printf("Enter the rows and columns of 2nd matrix: ");
    scanf("%d %d",&r2,&c2);
    int a[r1][c1],b[r2][c2],c[r1][c2];
    if(c1!=r2) {
        printf("Column and row of 1st matrix and 2nd matrix must be same.");
        return 0;
    }
    printf("Enter elements of matrix a: ");
    for(i=0;i<r1;i++) {
        for(j=0;j<c1;j++) {
            scanf("%d",&a[i][j]);
        }
    }
    printf("Enter elements of matrix b: ");
    for(i=0;i<r2;i++) {
        for(j=0;j<c2;j++) {
            scanf("%d",&b[i][j]);
        }
    }
    // Multiplication
    for(i=0;i<r1;i++) {
        for(j=0;j<c2;j++) {
            c[i][j] = 0;
            for(k=0;k<c1;k++) {
                c[i][j] += a[i][k]*b[k][j]; 
            }
        }
    }
    
    for(i=0;i<r1;i++) {
        for(j=0;j<c2;j++) {
            printf("%d  ",c[i][j]);
        }
        printf("\n");
    }
    return 0;
}





























