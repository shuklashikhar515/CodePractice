#include<stdio.h>
#include<math.h>
int main(){
    int n;
    scanf("%d",&n);
    // calculates the total number of digits - 1
    int digits = (int)log10(n);
    printf("%d\n",digits);

    // Find first digit
    n = (int)(n / pow(10, digits));
    printf("%d",n);
    return 0;
}
