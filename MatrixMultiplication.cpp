#include<iostream>
using namespace std;
int main() {
    int r1,c1,r2,c2;
    cout << "Enter the value for row and column of matrix 1: ";
    cin >> r1 >> c1;
    cout << "Enter the value for row and column of matrix 2: ";
    cin >> r2 >> c2;
    int arr1[r1][c1];
    int arr2[r2][c2];
    int arr3[r1][c2];
    for(int i=0;i<r1;i++) {
        for(int j=0;j<c1;j++) {
            cin >> arr1[r1][c1];
        }
    }
    for(int i=0;i<c1;i++) {
        for(int j=0;j<c2;j++) {
            cin >> arr2[r2][c2];
        }
    }
    for(int i=0;i<r1;i++)  {
        for(int j=0;j<c2;j++) {
            arr3[i][j]=0;
            for(int k=0;k<c1;k++) {
                arr3[i][k] = arr1[i][k] * arr2[k][j];
            }
        }
    }
    cout << endl;
    for(int i=0;i<r1;i++) {
        for(int j=0;j<c2;j++) {
            cout << arr3[i][j] << " ";
        }
        cout << endl;
    }


    return 0;
}
