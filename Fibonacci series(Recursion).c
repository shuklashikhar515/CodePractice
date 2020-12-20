#include<stdio.h>
int Fseries(int n) {
    static int a=0,b=1,c;
    if(n>0) {
        c=a+b;
        a=b;
        b=c;
        printf("%d ",c);
        Fseries (n-1);
    }
}

int main() {
    int num;
    printf("Enter the number of elements: ");
    scanf("%d",&num);
    printf("Series: \n");
    printf("%d %d ",0,1);
    Fseries(num-2);
    return 0;
}
