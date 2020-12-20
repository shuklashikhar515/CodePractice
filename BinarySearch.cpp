//Array elements must me in ascending order for binary search to work!!!
#include<iostream>
using namespace std;
int main() {
    int l,h,mid,N,key;
    cout << "Enter the element to be searched in the array: " ;
    cin >> key;
    cout << "Enter the size of the array: " ;
    cin >> N;

    int arr[N];
    for(int i=0;i<N;i++) {
        cin>>arr[i];
    }
    l=0;
    h=N;
    mid = (l+h)/2;
    if (mid == key) {
        cout << key <<"is at index no " << mid << ".";
    }

    else if(key < arr[mid]) {
        for(int i=l;i<mid;i++) {
            if(arr[i]==key) {
                cout << "The " << key << "is at index no "<<i<<".";
            }
        }
    }
    else {
        for(int i = mid+1;i<h;i++) {
            if(arr[i]==key) {
                cout << "The " << key << " is at index no "<<i<<".";
            }
        }
    }
    return 0;
}
