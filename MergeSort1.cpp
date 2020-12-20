#include<iostream>
using namespace std;
void output(int arr2[],int len) {
    cout << "Arrays :-----" << endl;
    for(int i=0;i<len;i++) {
        cout << arr2[i]<< endl;
    }
}
int mid_element(int arr1[], int len) {
    int mid = arr1[0];
    for(int i=1;i<len;i++) {
        if(arr1[i]>mid) {
            mid = arr1[i];
        }
    }
    return mid;
}

void merge_sort(int arr1[],int len, int low,int mid,int high) {
    int i = low,j = mid+1, k=0;
    int arr2[len];
    while(i<mid && j<high) {
        if(arr1[i]<=arr1[j]) {
            arr2[k]=arr1[i];
            k++;i++;
        }
        else {
            arr2[k]= arr1[j];
            j++;k++;
        }
        for(;i<mid;i++) {
            arr2[k] = arr1[i];
            k++;
        }
        for(;j<high;j++) {
            arr2[k] = arr1[j];
            k++;
        }

    }

    output(arr2,len);
}

void input(int arr1[], int len) {
    for(int i=0;i<len;i++) {
            cin >> arr1[i];
    }
}
int main() {
    int len;
    cout<< "Length of the array: ";
    cin >> len;
    int arr1[len];
    int low,high,mid;
    input(arr1,len);
    low=0;high = len-1;mid = mid_element(arr1,len);
    merge_sort(arr1,len,low,mid,high);
    return 0;
}
