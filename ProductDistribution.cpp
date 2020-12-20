#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main() {
    int m,n;
    cout << "Value of n and m: ";
    cin >> n >> m;
    if (n<1) {
        cout << "Enter the valid value of n." << endl;
        return 0;
    }
    else if(m<1 || m > n) {
        cout << "Enter the valid value of m: " << endl;
        return 0;
    }
    vector<int> vect;
    for(int x=0;x<n;x++) {
        int temp;
        cin >> temp;
        vect.push_back(temp);

    }
    sort(vect.begin(), vect.end());
    cout << endl;
    for(int x=0;x<n;x++) {
        cout << vect[x] << "  ";
    }
    vector <vector <int> >v;


    return 0;
}
