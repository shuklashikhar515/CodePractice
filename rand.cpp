#include<iostream>
using namespace std;

void output(int arr[], int len) {
    cout << "Array after sorting elements: ";
    for(int i=0;i<len;i++) {
        cout << arr[i] << "" ;
    }
}


void no_swap(int *xp, int *yp){
    int temp = *xp;
    *xp=*yp;
    *yp=temp;
}

int arr_partition(int arr[], int len, int low, int high ) {
    int pivot = arr[low];
    cout << "pivot: " << pivot << "  ";
    int i,j;
    i=low;
    j=high;
    while (i < j) {
        while(arr[i] < pivot) {
            i++;
        }
        while(arr[j] >pivot) {
            j++;
        }
        if(arr[i] < arr[j])  {
            no_swap(&arr[i],&arr[j]);
        }
    }
    no_swap(&arr[low], &arr[high]);
    return high;
}

void quick_sort(int arr[], int len, int low, int high) {
    while (low < high) {
        int partition_position = arr_partition(arr,len,low,high);

        quick_sort(arr,sizeof(arr)/sizeof(arr[0]), low, partition_position-1);
        quick_sort(arr,sizeof(arr)/sizeof(arr[0]), partition_position+1, high);
    }
}



void input(int arr[], int len) {
    for(int i=0;i<len;i++) {
        cin >> arr[i];
    }
}

int main() {
    int len;
    cout << "Array length : ";
    cin >> len;
    int arr[len];
    int low = 0;
    int high = len-1;
    input(arr,len);
    quick_sort(arr,len,low,high);
    output(arr,len);

    return 0;
}
