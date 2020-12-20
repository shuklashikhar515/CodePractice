#include<stdio.h>
int length(int num) {
    int count;
    while(num!=0) {
        count++;
        num = num/10;
    }
    return count;
}
int armstrong(int num) {
    int count = length(num);
    int temp,num1=1,sum =0;
    while(num != 0) {
        temp = num%10;
        for(int i=0;i<count;i++) {
            num1 = num1 * temp;
        }
        sum = sum + num1;
        num = num/10;
        num1 = 1;
    }
    return sum;
}
int main(){
    int num;
    scanf("%d",&num);
    int num1 = armstrong(num);
    //printf("%d\n",num1);
    if(num == num1) {
        printf("yes");
    }
    else{
        printf("No");
    }
    return 0;
}