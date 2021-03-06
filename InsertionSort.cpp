#include<iostream>
using namespace std;

void output(int arr[], int len) {
    cout << "Array after sorting: ";
    for (int x=0; x<len; x++) {
        cout << arr[x] << " ";
    }
}
void no_swap(int *xp, int *yp) {
    int temp = *xp;
    *xp = *yp;
    *yp=temp;
}

void insertion_sort(int arr[], int len) {
    for(int i=1;i<len;i++) {
        int key = arr[i];
        for(int j=i-1;j>=0;j--) {
            if(key < arr[j]) {
                no_swap(&arr[j],&arr[j+1]);
            }
        }
    }
    output(arr,len);

}

void input(int arr[], int len) {
    for(int x= 0;x<len;x++) {
        cin >> arr[x];
    }
    insertion_sort(arr,len);
}

int main() {
    int len;
    cout << "Enter the length of the array: ";
    cin >> len;
    int arr[len];
    input(arr, len);

    return 0;
}
