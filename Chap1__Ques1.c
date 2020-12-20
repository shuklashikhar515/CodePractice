#include<stdio.h>
int main() {
    int sal;
    float da,hra,TotalSal;
    printf("Enter Ramesh's salary: ");
    scanf("%d",&sal);
    da=(40*sal)/100;
    hra=(20*sal)/100;
    TotalSal=sal+da+hra;
    printf("Total salary of ramesh is = %d \n",&TotalSal);
    return 0;
}
