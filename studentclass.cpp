#include<iostream>
using namespace std;
class student {
private:
    int roll_no;
    string name;
    float sub_1;
    float sub_2;
    float sub_3;
public:
    student() {
    roll_no = 0;
    name = "NA";
    sub_1 = 0.0;
    sub_2 = 0.0;
    sub_3 = 0.0;
}
    float totalMarks();
    char grade();

    void setStuDetails(int roll, string name);
    void setMarks(float sub_1, float sub_2, float sub_3);

    //void getStuDetails() { return };
    //void getStuDetails();

};
/*student::student() {
    roll_no = 0;
    name = "NA";
    sub_1 = 0.0;
    sub_2 = 0.0;
    sub_3 = 0.0;
}*/
float student::totalMarks() {
    return (sub_1+sub_2+sub_3);
}
char student::grade(){
    float avg = totalMarks()/3;
    if (avg>60)
        return 'A';
    else if (avg>=40 && avg <60)
        return 'B';
    else
        return 'C';
}
void student::setStuDetails(int roll, string s_name) {
    roll_no = roll;
    name = s_name;
}

void student::setMarks(float sub1, float sub2, float sub3) {
    sub_1 = sub1;
    sub_2 = sub2;
    sub_3 = sub3;
}

int main() {
    student s1;
    cout << "Enter the value of roll no and name: ";
    cin >> s1.roll_no >> s1.name;
    cout << "Enter the value of marks: ";
    cin >> s1.sub_1 >> s1.sub_2 >> s1.sub_3;

    cout << s1.totalMarks() << "\n" << s1.grade();
    cout <<

    return 0;
}
