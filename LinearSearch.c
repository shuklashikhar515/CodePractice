/*
Enter the size of array: 10
Enter the element to be searched:5
1 3 5 6 89 124 0 31 64 22
5 is a index 2.

Enter the size of array: 5
Enter the element to be searched:2
10 21 36 98 1 
Key not found.



*/

#include <stdio.h>

int main()
{
    int n,i,key,ind=0;
    printf("Enter the size of array: ");
    scanf("%d",&n);
    int a[n];
    printf("Enter the element to be searched:");
    scanf("%d",&key);
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++){
        if(key == a[i]){
            printf("%d is a index %d.",key,i);
            ind = 1;
        }
    }
    if(ind == 0){
        printf("Key not found.");
    }
    
    return 0;
}
