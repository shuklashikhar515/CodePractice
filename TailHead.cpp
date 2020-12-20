// Tail Head or reverse number sequence |||| head Recursion / straight sequence
#include<iostream>
using namespace std;
void tailHead(int num) {
    if( num > 0) {
        cout << num  << " " ;
        tailHead(num-1);
    }
}
void headRecursion(int num) {
    if( num > 0) {
        headRecursion(num-1);
        cout << num  << " " ;
    }
}
int main() {
    int num;
    cout<< "Value of number: ";
    cin >> num;
    tailHead(num);
    cout << endl;
    headRecursion(num);
    return 0;
}
