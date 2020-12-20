#include<iostream>
#include<algorithm>
using namespace std;
void input_Array(int arr[], int n) {
    for(int i =0; i< n;i++)
        cin >> arr[i];
}

int main() {
    int n,T,k;
    cin >> T;
    do {
        cin>> n;
        int arr[n];
        input_Array(arr,n);
        cin >> k;
        sort(arr,arr+n);
        /*for(int i=0;i<n;i++) {
            cout << arr[i] << " ";
        }*/
        cout << "--" << arr[k-1];
        T--;
    }while(T!=0);
    return 0;
}