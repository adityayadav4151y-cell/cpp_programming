#include <iostream>
#include <string>
using namespace std;

int main() {
    string name;
    float marks;

    cout << "Enter student name: ";
    getline(cin, name);

    cout << "Enter student marks: ";
    cin >> marks;

    cout << "\n--- Student Details ---" << endl;
    cout << "Name : " << name << endl;
    cout << "Marks: " << marks << endl;

    return 0;
}
