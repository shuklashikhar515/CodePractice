//Recursion
#include<iostream>
using namespace std;
int sum(int n) {
    if(n==1)
        return 1;
    else {
        return sum(n-1)+n;
    }

}
int main() {
    int num;
    cin >> num;
    cout << sum(num) << endl;
    cout << ((num+1)*num)/2;
    return 0;
}


