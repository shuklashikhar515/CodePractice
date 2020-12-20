#include<stdio.h>
void arrayRotate(int arr[], int n) {
    int arr1[n];
    int j= n-1;
    for(int i=0;i<n;i++) {
        arr1[i] = arr[j];
        j--;
    }
    //printf("\n");
    for(j=0;j<n;j++) {
        printf("%d  ",arr1[j]);
    }
}
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++) {
        scanf("%d",&arr[i]);
    }
    arrayRotate(arr,n);
    return 0;
}