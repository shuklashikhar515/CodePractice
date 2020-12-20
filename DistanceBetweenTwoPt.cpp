#include<iostream>
#include<cmath>
using namespace std;
int main() {
    int x1,x2,y1,y2;
    float dist;
    cout<<"Enter the value of points x1 and x2: " ;
    cin >> x1 >> x2;
    cout<<"Enter the value of points y1 and y2: " ;
    cin >> y1 >> y2;
    dist = sqrt( pow((x2-x1),2) + pow((y2-y1),2));
    cout << "Distance: " << dist;
    return 0;
}
