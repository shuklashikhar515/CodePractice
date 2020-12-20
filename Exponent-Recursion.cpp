#include<iostream>
using namespace std;
int expo(int n,int p) {
    if(p == 0) {
        return 1;
    }
    else {
        return expo(n,p-1)*n;
    }

}
int main() {
    int num,pow;
    cout << "Enter number and power respectively : ";
    cin >> num >> pow;
    cout << expo(num,pow);
    return 0;
}
