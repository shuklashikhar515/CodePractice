#include<iostream>
using namespace std;
int main() {
    int count=1;
    for(int i=0; i<4;i++) {
        for(int j=0;j<count;j++) {
            cout << "*";
        }
        cout << endl;
        count++;
    }
    return 0;
}
