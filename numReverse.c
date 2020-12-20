#include<stdio.h>
void rev(int num) {
    int num1=0;
    while(num!=0) {
        int temp = num%10;
        num1 = num1 * 10 + temp;
        num /=10;
    }
    printf("%d",num1);
}
int main(){
    int num;
    scanf("%d",&num);
    rev(num);
    return 0;
}