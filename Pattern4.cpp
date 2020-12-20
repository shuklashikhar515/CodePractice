#include<iostream>
using namespace std;
int main() {
    int space_count=3,star_count=1;
    for(int i=0;i<4;i++) {
        for(int j=0;j<space_count;j++) {
            cout << " ";
        }
        for (int k=0;k<star_count;k++) {
            cout << "*";
        }
        cout << endl;
        space_count--;
        star_count++;

    }
    return 0;
}

/*

for(int i=0;i<4;i++) {
 for(int j=0;j<4;j++) {
        if(i+j>4-1)
            cout << "*";
        else
          cout << " ";

 }
 cout << endl;
}
*/
