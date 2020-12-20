#include <stdio.h>
#include<math.h>

int main()
{
    int num,count=0,temp,dig,sum=0;
    printf("Enter the number of terms: ");
    scanf("%d",&num);
    temp=num;
    for(;temp>0;temp=temp/10){
        count++;
    }
    for(temp=num;temp>0;temp=temp/10) {
        dig = temp%10;
        sum+=pow(dig,count);
    }
    if(sum==num) {
        printf("%d is armstrong.",num);
    }
    else {
        printf("%d is not a armstrong number.",num);
    }
    
    return 0;
}
