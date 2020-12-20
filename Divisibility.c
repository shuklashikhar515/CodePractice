#include<stdio.h>
int main() {
    unsigned long int N,rslt=0;
    scanf("%lu",&N);
    int A[N],rem[N];
    for(int i=0;i<N;i++) {
        scanf("%d",&A[i]);
    }
    for(int i=0;i<N;i++) {
        rem[i] = A[i]%10;
        rslt=rslt*10+rem[i];
    }
    if(rslt%10==0) {
        printf("\nYES");
    }
    else {
        printf("\nNO");
    }
    return 0;
}
