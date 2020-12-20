#include<iostream>
using namespace std;
int main() {
    int star_count = 4,space_count=0;
    for(int i=0;i<4;i++) {
        for(int j=0;j<space_count;j++) {
            cout << " ";
        }
        for(int k =0;k<star_count;k++) {
            cout << "*";
        }
        cout << endl;
        space_count++;
        star_count--;
    }

    /*
 for(int i=0;i<4;i++) {
     for(int j=0;j<4;j++) {
    if (i>j) {
        cout<< " ";
    }
    else
        cout<<"*";
     }
 }
    */

    return 0;
}
