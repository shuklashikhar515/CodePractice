#include<iostream>
#include<algorithm>
using namespace std;
void Input(int arr[], int len) {
    for(int x=0;x<len;x++) {
        cin >> arr[x];
    }
    sort(arr, arr+len);
    /*for(int x=0;x<len;x++) {
        cout << arr[x] << " ";
    }
    cout << endl << "Array after sorting: ";
    for(int x=0;x<len;x++) {
        cout << arr[x] << " ";
    }
    cout << endl;*/
}

int BinarySearch(int arr[], int len, int key) {
    int mid,low,high;
    bool flag=0;
    low=0;
    high=len;
    mid = (float)(low+high)/2;
    if (arr[mid]==key) {
            flag =1;
        return mid;
    }
    else if(key < mid) {
        high = mid;
        for(int x=0;x<high;x++) {
            if (arr[x]==key) {
                flag =1;
                return x;
            }
        }
    }
    else {
        low = mid+1;
        for(int x=0;x<high;x++) {
            if(arr[x]==key) {
                flag =1;
                return x;
            }
        }
    }
    if (flag == 0)
        cout << "Element not Found. Try Again!!!";
        return -1;
}
int main() {
    int key,len;
    cout << "Value of element to be searched: ";
    cin >> key;
    cout << "Length of the array: ";
    cin >> len;
    int arr[len];
    Input(arr,len);
    int index = BinarySearch(arr,len,key);
    if (index == -1) {

    }
    else {
        cout << "Element is at index : " << index ;
    }
    return 0;
}
