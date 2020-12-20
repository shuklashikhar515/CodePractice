#include<iostream>
#include<cmath>
using namespace std;
int main() {
    int rad,ht;
    float vol;
    cout << "Enter the value of radius and height of cylinder: ";
    cin >> rad >> ht;
    vol = (22/7.0) * pow(rad,2) * ht;
    cout << "Volume is: " << vol;
    return 0;
}
