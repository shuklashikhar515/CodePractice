#include<stdio.h>
int main() {
    int num,temp,count,i,rslt,sum;
    count = 0;
    sum=0;
    printf("Enter a five digit number: ");
    scanf("%d",&num);
    temp = num;
    while(temp>0) {
        rslt=temp%10;
        sum = sum+rslt;
        temp=temp/10;
        printf("i=%d && rslt = %d \n",i,rslt);
        count++;

    }

    //checking if number is 5 digit or not
    if(count<5 || count>5) {
        printf("Entered number contains %d digits.\n",count);
        printf("Enter a 5 digit number again.");
        return 0;
    }
    else {
     printf("\nSum of the digits is: %d\n",sum);
    }
    return 0;
}
