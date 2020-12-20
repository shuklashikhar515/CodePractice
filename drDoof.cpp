/*
Problem
Chef got into a fight with the evil Dr Doof. Dr Doof has decided to destroy all even numbers from
the universe using his Evil-Destroy-inator. Chef has N integers with him. To stop Doof, Chef has to
find an odd number which is an integer multiple of all N numbers that he has with him.
Find if it is possible for Chef to prevent Dr Doof from destroying the even numbers.

Formally, given N positive integers, find if there exists an odd number which is an
integer multiple of all the given N numbers. If yes, print "YES", otherwise "NO". You can print any letter in any case.

Input
First line contains T, number of testcases. Each testcase consists of 2 lines.
The first line of each test case consists of a positive integer N, denoting the number of positive integers Chef has.
The second line of each test case contains N space separated integers Ai each denoting an integer that Chef has with him.
Output
For every test case, if there exists such an odd number, print "YES" on a separate line,
otherwise "NO". The judge is case insensitive. That means, your code can print any letter
in any case ( "Yes", "yes" or "YES" are all accepted).

Constraints
1≤T≤103
1≤N≤103
1≤Ai≤103
Sample Input
2
5
1 2 5 4 3
1
7
Sample Output
NO
YES

*/
#include<iostream>
using namespace std;
int main() {
    int T,N,num,flag=0;
    cout << "Enter the value for test cases:" ;
    cin >> T ;

    while(T!=0) {
        cout << "Enter the number of integers: "<<endl;
        cin >> N;
        for(int i=0;i<N;i++) {
            cin >> num ;
            if(num%2 == 0) {
				flag =1;
				break;
			}
        }
        if(flag == 1) {
            cout << "NO" << endl;
        }
        else {
            cout << "YES" <<endl;
        }
        flag = 0;
        T--;
    }
    return 0;
}
