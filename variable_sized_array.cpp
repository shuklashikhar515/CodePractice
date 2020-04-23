#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int n,q;
    //Taking the no of arrays and querry as input.
    cin >> n >> q;
    vector< vector<int> > vect; // Declaring a 2D vector or vector of vector
    for(int x=0;x<n;x++) {
        vector<int> v1;
        int inpI,inpK;
        cin >> inpI;
        for(int y=0;y<inpI;y++) {
            cin >> inpK;
            v1.push_back(inpK); // This vector will update the 2D vector row wise.
        }
        // Pushing back above 1D vector to create the 2D vector ie putting the column ac to their rows.
        vect.push_back(v1);
    }

    for (int x=0;x<q;x++) {
        int i,j;
        cin >> i >> j;
        cout << vect[i][j] << endl;

    }
        //Displaying all the elements of the 2D vector.
    /*for (int x = 0; x < vect.size(); x++) {
        for (int y = 0; y < vect[x].size(); y++)
            cout << vect[x][y] << " ";
        cout << endl;
    }*/

    return 0;
}
