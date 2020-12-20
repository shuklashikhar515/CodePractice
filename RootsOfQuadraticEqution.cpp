// r1= -b+ sqrt(b*b - 4ac)/2a
// r2= -b- sqrt(b*b - 4ac)/2a
#include<iostream>
#include<cmath>
using namespace std;
int main(){
    float a,b,c;
    float r1,r2;
    cout << "Enter the coefficients a,b and c: ";
    cin >> a >> b >> c;
    r1 = -b + sqrt(pow(b,2) - (4*a*c))/(2*a);
    r2 = -b - sqrt(pow(b,2) - (4*a*c))/(2*a);
    cout << "Roots are: " << r1 << " " << r2 << endl;
    return 0;
}
