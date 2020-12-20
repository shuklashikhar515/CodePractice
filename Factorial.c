#include<stdio.h>
int main(){
    int fact,temp,num;
    fact=1;
    printf("Enter the number: ");
    scanf("%d",&num);
    temp=num;
    while(temp>0) {
        fact=fact*temp;
        temp--;
    }
    printf("Factorial of %d is %d.",num,fact);
    return 0;
    }
