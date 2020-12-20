// ar = (b*h)/2
#include <iostream>
int main() {
    int base,ht;
    cout<<"Enter th base an height of the triangle: ";
    cin>> base >> ht;
    output(base,ht)
}
void output(int b, int h) {
    int ar;
    ar=(float)(b*h)/2;
    cout << ar << endl;

}
