//Occurences of 2 as a digit 
#include<iostream>
using namespace std;
int dig_occ(int n) {
    int i,temp,count=0;
    for(i=0;i<=n;i++) {
        temp = i;
        while(temp!=0) {
            if(temp%10 == 2) {
                count++;
            }
            temp /=10;
        }
    }
    cout << count;
}
int main() {
    int n;
    cin >> n;
    dig_occ(n);
    return 0;
}

// Time Complexity O(n^2);