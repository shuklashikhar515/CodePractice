#include<stdio.h>
#define pi 22.0/7
int main() {
    unsigned int d,r,x;
    int count = 0;
    scanf("%u",&d);
    for(int i=1;i<=d;i++) {
        scanf("%u",&r);
        scanf("%u",&x);
        float rslt= (float)100*x;
        float rslt1=2*pi*r;
        if(rslt1<=rslt) {
            count++;
        }
    }
    printf("%d",count);
    return 0;
}
