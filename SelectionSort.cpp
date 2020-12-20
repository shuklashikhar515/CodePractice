#include<iostream>
using namespace std;

void Input(int arr[], int len) {
    //cout << "Enter the values in array: ";
    for(int x=0;x<len;x++) {
        //cout << "Value entered at " << x << ": ";
        cin >> arr[x];
    }
}
void Noswap(int *xp, int *yp) {
    int temp;
    temp = *xp;
    *xp = *yp;
    *yp = temp;

}
void Sorting(int arr[], int len) {
    int temp;
    for (int x=0;x<(len-1);x++) {
        for(int y=x+1;y<len;y++) {
            if(arr[x]>arr[y]) {
                /*temp = arr[x];
                arr[x]= arr[y];
                arr[y] = temp;*/
                Noswap(&arr[x], &arr[y]);
             }
        }
    }
}
void Output(int arr[], int len) {
    for(int x=0;x<len;x++) {
        cout << arr[x] << " " ;
    }
}
int main() {
    int len,key;
    cout << "Length of the array: ";
    cin >> len;
    int arr[len];
    Input(arr,len);
    Sorting(arr,len);
    Output(arr,len);
    return 0;
}
