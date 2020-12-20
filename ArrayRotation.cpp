#include<iostream>
using namespace std;

void Output(int arr[],  int len) {
    cout << "Final Array : ";
    for(int x=0;x<len;x++) {
        cout << arr[x] << " ";
    }
}

void rotateOne(int arr[], int len) {
    int temp = arr[0];
    for(int x=0;x<len-1;x++) {
        arr[x]= arr[x+1];
    }
    arr[len-1] = temp;
}
void Arrrotate(int ar[],int n,int d) {
    for(int x=0;x<d;x++) {
        rotateOne(ar,n);
    }

    Output(ar,n);
}


int main() {
    int len,d;
    cout << "Enter the no of elements of array : " ;
    cin >> len;
    cout << "Enter the value by which elements needs to be rotated: ";
    cin >> d;
    int arr[len];
    for(int x=0;x<len;x++) {
        cin >> arr[x];
    }
    Arrrotate(arr,len,d);
    return 0;
}
