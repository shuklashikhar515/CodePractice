/*
Merging 2 sorted arrays in a 3rd array(all elements will be sorted)

Shikhar Shukla
04/05/2020
*/
#include<iostream>
using namespace std;

void output(int arr3[], int len3) {
    cout << "Array After Sorting: ";
    for(int i=0;i<len3;i++) {
        cout << arr3[i] <<  "  " ;
    }
}

void merge_sort(int arr1[],int len1, int arr2[],int len2, int arr3[],int len3) {
    int i=0,j=0,k=0;
    if (len1 <= len2) {
        while(i<len1) {
            if(arr1[i] <= arr2[j]) {
                arr3[k] = arr1[i];
                k++;i++;
            }
            else {
                arr3[k]=arr2[j];
                k++;j++;
            }
        }
        while(k<len3)  {
                arr3[k] = arr2[j];
                j++;
                k++;

        }
    }
    else {

    while(j<len2) {
            if(arr1[i] <= arr2[j]) {
                arr3[k] = arr1[i];
                k++;i++;
            }
            else {
                arr3[k]=arr2[j];
                k++;j++;
            }
        }
        while(k<len3)  {
                arr3[k] = arr1[i];
                i++;
                k++;

        }
    }
}


void input(int arr1[], int len1, int arr2[], int len2) {
    cout << "Array1 : ";
    for(int i=0;i<len1;i++) {
        cin >> arr1[i];
    }

    cout << "Array2 : ";
    for(int i=0;i<len2;i++) {
        cin >> arr2[i];
    }
}
int main() {
    int len1,len2,len3;
    cout << "Size of array1 and array2: ";
    cin >> len1 >> len2;
    len3=len1+len2;
    int arr1[len1];
    int arr2[len2];
    int arr3[len3];

    input(arr1,len1,arr2,len2);
    merge_sort(arr1,len1,arr2,len2,arr3,len3);
    output(arr3,len3);


    return 0;
}
