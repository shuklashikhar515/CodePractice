#include<stdio.h>
#include<math.h>
int main() {
    unsigned long long int N, ans=0;
    scanf("%llu",&N);
    unsigned long long int A[N],rslt[N];
    for(int i=1;i<=N;i++) {
        scanf("%llu",&A[i]);
    }
    //for first N/2 integers calculate their first digits
    for(int i=1;i<=N/2;i++) {
        unsigned long long int num=A[i];
        rslt[i]=firstDigit(num);
    }
    //for last N/2 integers calculate their last digits
    for(int i=(N/2)+1;i<=N;i++) {
        unsigned long long int num =A[i];
        rslt[i]=lastDigit(num);
    }
    for(int i=1;i<=N;i++) {
        ans=ans*10+rslt[i];
    }
    if(ans%11==0){
        printf("OUI");
    }
    else {
        printf("NON");
    }
    return 0;
}
//calculating the first digit of integer
int firstDigit(unsigned long int num) {
    unsigned long int digits = (unsigned long int)log10(num);  // Find total number of digits - 1
    num = (unsigned long int)(num / pow(10, digits)); // Find first digit
    return num; // Return first digit
}
//calculating the last digit of integer
int lastDigit(unsigned long int num) {
    return num%10;
}
