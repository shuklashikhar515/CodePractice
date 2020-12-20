#include<stdio.h>
int main() {
    int num,count,count1,temp,i,rem,rslt=0,rslt1=1;
    printf("Enter the number: ");
    scanf("%d",&num);
    temp=num;
    count1 =1;
    while(temp>0) {
        rem=temp%10;
        temp=temp/10;
        count1++;
    }
    count=count1-1;
    printf("Number of digits in entered number %d is : %d\n",num,count);
    temp = num;
    while(temp>0) {
        rem=temp%10;//remainder is calculated
        for(i=0;i<count;i++) {
            rslt1=rslt1*rem;//each digit is multiplied by itself by no of digits in number
        }
        rslt+=rslt1;
        temp=temp/10;
        rslt1=1;
    }
    if(num==rslt) {
        printf("%d is an Armstrong number.\n",num);
    }
    else {
        printf("%d is not an Armstrong number.\n",num);
    }
    return 0;
}
