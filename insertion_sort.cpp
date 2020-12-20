#include<iostream>
using namespace std;
void input(int arr[], int n) {
    for(int i=0;i<n;i++) {
        cin >>arr[i];
    }
}
void swap(int *x, int *y) {
    int temp = *x;
    *x = *y;
    *y = temp;
}
void ins_sort(int arr[], int n) {
    for(int i=1;i<n;i++) {
        for(int j=i;j>0;j--) {
            if(arr[j] < arr[j-1]) 
                swap(&arr[j], &arr[j-1]);
            else 
                break;
        }
    }
}
void output_arr(int arr[], int n) {
    for(int i=0;i<n;i++) {
        cout << arr[i] << " "; 
    }
}
int main() {
    int n;
    cin >> n;
    int arr[n];
    input(arr,n);
    ins_sort(arr,n);
    output_arr(arr,n);
    return 0;
}