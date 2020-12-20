// 1st element as the pivot
#include<iostream>
using namespace std;
void output(int arr[], int len,int low, int high) {
    cout << low << " , " << high << endl;
    cout << "Arrays after sorting: " << endl;
    for(int i =0;i<len;i++) {
        cout << arr[i] << " " ;
    }
}
void no_swap(int *xp, int *yp){
    int temp = *xp;
    *xp = *yp;
    *yp = temp;
    //cout << endl;
    //cout << *xp << ", " << *yp << endl;
}
// 35 50 15 25 80 20 90 45 ------ 35 20 15 25 80 50 90 45  --- 25 20 15 35 80 50 90 45
int arr_partition(int arr[], int len, int low, int high) {
    int pivot = arr[low];
    int i,j;
    i=low+1;
    j= high-1;
    cout << pivot << "," << i << "," << j
        <<endl;
    while(i<j) {
        while(arr[i] <= pivot) {
            i++;
        }
        while(arr[j] > pivot) {
            j--;
        }
        if(i<j) {
            no_swap(&arr[i],&arr[j]); // 1 ---- 5  /// 4 ----- 3
        }
    }
    no_swap(&arr[low], &arr[j]);
    return j;
}

void quicksort(int arr[], int len, int low, int high) {
    int part_pos = arr_partition(arr,len,low,high);
    //cout << endl;
    //cout << part_pos << endl;
    quicksort(arr,len,low,part_pos);
}



void input(int arr[], int len) {
    for(int i=0;i<len;i++) {
        cin >> arr[i];
    }
}
int main() {
    int len,low,high;
    cout << "Length of the array : ";
    cin >> len;
    int arr[len];
    input(arr,len);
    low = 0;
    high = len;
    quicksort(arr,len,low,high);
    output(arr,len,low,high);
    return 0;
}
