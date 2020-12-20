#include<stdio.h>
int main() {
    int count=0;
    int l,r,k;
    scanf("%d",&l);//range starting/ending
    scanf("%d",&r);//range ending/starting
    scanf("%d",&k);// divisor
    if(l<=r) {
        for(int i=l;i<=r;i++) {
            if(i%k==0) {
                count++;
            }
        }
    }
    if(r<=l) {
        for(int i=r;i<=l;i++) {
            if(i%k==0) {
                count++;
            }
        }
    }
    printf("%d",count);
    return 0;
}
