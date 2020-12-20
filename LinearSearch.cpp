#include<iostream>
using namespace std;
int LinearSearch(int N, int k);
int main() {
    int len,key;
    cout << "Enter the element to search from the array: ";
    cin >> key;
    cout << "Enter the length of the array: ";
    cin >> len;
    int ans = LinearSearch(len,key);
    cout << "Element is at index no " << ans << ".\n";
    return 0;
}
int LinearSearch(int N, int k) {
    int  len = N;
    int key = k;
    int arr[len];
    for(int i=0;i<len;i++) {
        cin >> arr[i];
    }
    for(int i=0;i<len;i++) {
        if(arr[i]==key) {
                cout << "Search Successful!!"
            return i;
        }
    }
    cout << "Search Unsuccessful. Key not found. Try Again!!!";
    return 0;
}
