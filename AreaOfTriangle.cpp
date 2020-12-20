// ar = (b*h)/2
#include <iostream>
using namespace std;
void output(int b, int h);

int main() {
    int base,ht;
    cout<<"Enter th base an height of the triangle: ";
    cin>> base >> ht;
    output(base,ht);

    return 0;
}
void output(int b, int h) {
    float ar;
    ar=(float)(b*h)/2;
    cout << ar << endl;
}
