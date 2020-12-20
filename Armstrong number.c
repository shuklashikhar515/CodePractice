#include<stdio.h>
int main() {
    int num,count,count1,temp,i,j,rslt,rslt1=1;
    printf("Enter the number: ");
    scanf("%d",&num);
    temp=num;
    count1 =1;
    while(temp>0) {
        i=temp%10;
        temp=temp/10;
        count1++;
    }
    count=count1-1;
    printf("Number of digits in %d : %d\n",num,count);
    temp=num;
    /*while(temp>0) {
        i=temp%10;
        for(j=0;j<count;j++) {
            rslt1 = rslt1*i;
            printf("\t rslt1 = %d ",rslt1);
        }
        rslt=rslt+rslt1;
        printf("\n Result: %d ",rslt);
        temp=temp/10;
    }
    printf("\n Result: %d \n",rslt);*/
    return 0;
}
