//Palindrome using AR
#include<stdio.h>
int rev(int num);
int main() {
    int rev1,num;
    printf("Enter the number:");
    scanf("%d",&num);
    rev1 = rev(num);
    if(rev1 == num) {
        printf("%d is a palindrome number",rev1);
    }
    else {
        printf("%d is not a palindrome number.",num);
    }
    return 0;
}
int rev(int num) {
    int rev = 0;
    while(num%10 != 0) {
        rev = rev*10 + num%10;
        num = num/10;
    }
    return rev;
}