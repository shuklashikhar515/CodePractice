#include<stdio.h>
// will this code compile successfully or will show compile time error, as no of elements(n) declared is variable and not constant, which is supposed to show error.
int main(){
	int n,i;
	scanf("%d",&n);// if n=5
	printf("%d \n",n);
	int a[n];
	//a[n]=10;//n=6
	for(i=0;i<=n;i++) {
	    printf("a[%d]:",i);
        scanf("%d",&a[i]);
	}
	for(i=0;i<=n;i++) {
        printf("%d\n",a[i]);
	}
	//printf("%d",a[n]);
}
