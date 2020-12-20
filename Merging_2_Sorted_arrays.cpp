#include<iostream>
using namespace std;
/*void output(int arr1[] ,int len1,int arr2[] ,int len2) {
    for(int i=0;i<len1;i++) {
        cin >> arr1[i];
    }
    cout << endl;
    for(int i=0;i<len2;i++) {
        cin >> arr2[i];
    }
}*/
void arr_sort(int arr1[] ,int len1,int arr2[] ,int len2, int arr3[], int len3) {
    int i=0,j=0,k=0;
    if(len1 <= len2) {
        while(i < len1) {
            while(arr1[i] <=  arr2[j]) {
                if(i <= len1) {
                    arr3[k] = arr1[i];
                    i++;k++;
                }
            }
            if(i<=len1) {
                while(arr2[j] < arr1[i]) {
                    arr3[k] = arr2[j];
                    j++;k++;
                }
            }
        }
        while(j<len2) {
            arr3[k] = arr2[j];
        }
    }
    else {
        while(j < len2) {
            while(arr2[j] <  arr1[i]) {
                if(j <= len2) {
                    arr3[k] = arr2[j];
                    j++;k++;
                }
            }
            if(j<=len2) {
                while(arr1[i] <  arr2[j]) {
                    arr3[k] = arr1[i];
                    i++;k++;
                }
            }
        }
    }
        while(i<len1) {
            arr3[k] = arr1[i];
        }

    cout << endl;
    for(int m = 0;m<len3;m++) {
        cout << arr3[m] << " ";
    }
}

void input(int arr1[] ,int len1,int arr2[] ,int len2) {
    for(int i=0;i<len1;i++) {
        cin >> arr1[i];
    }
    cout << endl;
    for(int i=0;i<len2;i++) {
        cin >> arr2[i];
    }
}
int main() {
    int len1,len2,len3;
    cout << "Length of array1 and array2 : ";
    cin >> len1 >> len2;
    int arr1[len1];
    int arr2[len2];
    len3=len1+len2;
    int arr3[len3];
    input(arr1,len1,arr2,len2);
    arr_sort(arr1,len1,arr2,len2,arr3,len3);
    //output(arr1,len1,len2,arr2,len2);
    return 0;
}
