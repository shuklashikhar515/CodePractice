#include<iostream>
using namespace std;
int main() {
    int p,r,t;
    float SI;
    cout << "Enter the value of p, r and t: ";
    cin >> p >> r >> t;
    SI = (float)(p*r*t)/100;
    cout << "Simple Interest is: " << SI;
    return 0;
}
