#include<stdio.h>
int fibo(int n){
    if(n<=1) {
        return n;
    }
    else {
        return fibo(n-1)+fibo(n-2);
        
    }
    
}


int main() {
    int num,T;
    do{
        printf("Enter a number: ");
        scanf("%d",&num);
        
        printf("Sum of fibonaccie series till %d is %d.\n",num,fibo(num));
        
        printf("Choose:\n  Press any number to continue\n  0 to exit \n");
        scanf("%d",&T);
    }while(T!=0);
    
    return 0;
}
