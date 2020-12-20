#include<stdio.h>
int main() {
    int a, b,i,rslt,num;
    printf("Enter how many times the series should be processed: ");
    scanf("%d",&num);
    a=0;
    b=1;
    printf("%d\t",a);
    printf("%d\t",b);
    for(i=0;i<num;i++) {
        rslt = a+b;
        printf("%d\t",rslt);
        a=b;
        b=rslt;
    }
    return 0;
}
