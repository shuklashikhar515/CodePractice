#include<iostream>
using namespace std;
void output(int arr[],int len) {
    cout << "Array after sorting : " << endl;

    for(int x=0;x<len;x++) {
        cout << arr[x] << " ";
    }
    cout <<endl;
}
void no_swap(int *xp,int *yp) {
    int temp = *xp;
    *xp = *yp;
    *yp = temp;
}
void bubble_sort(int arr[],int len) {
    for(int i=0;i<len;i++) {
        for (int j=0;j<len-1;j++){
            if(arr[j]>arr[j+1]) {

                no_swap(&arr[j],&arr[j+1]);

            }
        }
    }
}
void input(int arr[],int len){
    for(int x=0;x<len;x++) {
        cin >> arr[x];
    }
    bubble_sort(arr,len);
    output(arr,len);

}
int main() {
    int len;
    cout << "Length of array: ";
    cin >> len;
    int arr[len];
    input(arr,len);
    return 0;
}
