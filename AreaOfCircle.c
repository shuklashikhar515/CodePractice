#include<iostream>
#include<cmath>
using namespace std;
int main() {
    float rad, ar;
    cout << "Enter the radius of the circle: ";
    cin >> rad;
    ar = (22/7)*pow(rad,2);
    cout << "Area is: " <<ar;
    return 0;
}
