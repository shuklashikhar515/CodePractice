#include<iostream>
#include<cmath>
using namespace std;
int main(){
    int u,v,a;
    float s;
    cout<< "Enter the values of u,v,a: ";
    cin >> u >> v >> a;
    s = (pow(v,2) - pow(u,2))/(2*a);
    cout << s << endl;
    return 0;
}
