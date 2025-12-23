#include <iostream>
using namespace std;

int main() {
    int marks;
    cout << "Enter student's marks: ";
    cin >> marks;

    (marks >= 40) ? cout << "Pass" : cout << "Fail";

    return 0;
}