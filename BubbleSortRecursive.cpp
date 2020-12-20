#include<iostream>
using namespace std;

void output(int arr[], int  len) {
    for (int i=0;i<len;i++) {
        cout << arr[i] << " ";
    }
}

void no_swap(int *xp, int *yp) {
    int temp = *xp;
    *xp = *yp;
    *yp = temp;
}

void bubble_sort(int arr[], int len) {
    if(len==1) {
        return;
    }
    else {
        for(int i=0; i<len-1;i++) {
            if(arr[i] > arr[i+1]) {
                no_swap(&arr[i],&arr[i+1]);
            }
        }
        bubble_sort(arr,len-1);
    }
}
void input(int arr[], int len) {
    for(int x=0; x<len;x++) {
        cin >> arr[x];
    }
    bubble_sort(arr,len);
}
int main () {
    int len;
    cout << "Length of the array: ";
    cin >> len;
    int arr[len];
    input(arr,len);
    output(arr,len);
    return 0;
}
