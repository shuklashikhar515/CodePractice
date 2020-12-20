#include<stdio.h>

int binarySearch(int arr[], int n, int key) {
	int l=0,h=n-1,mid;
	int bool = 0;
	while(l<=h) {
	    mid  = (l+h)/2;
		if(key == arr[mid]) {
			bool =1;
			return mid;
		}
		else if(key > arr[mid]) {
			l = mid +1;
		}
		else {
			h = mid -1;
		}
	}
	if(bool == 1) {
		return mid;
	}
	else {
		return -1;
	}
}
int main(){
    int n;
    scanf("%d",&n);
	int arr[n];// = {10,20,30,40,50,60,70,88,90,100};
	//int n = sizeof(arr)/sizeof(arr[0]);
	printf("Array elements:- ");
	for(int i=0;i<n;i++) {
	    scanf("%d",&arr[i]);
	}
	int key;
	//printf("Size Of array: %d\n",n);
	printf("Key: ");
	scanf("%d",&key);
    key = binarySearch(arr,n,key);
	if(key == -1) {
		printf("Element not found!!!");
	}
	else{
		printf("Element is found at : %d\n",key);
	}
	return 0;
}