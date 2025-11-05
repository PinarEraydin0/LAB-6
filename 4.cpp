#include <iostream>
#include <string>
using namespace std;

void printInfo(string name, int age) {
    cout << "Name: " << name << ", Age: " << age << endl;
}

void printInfo(int code, string course) {
    cout << "Course: " << course << ", Code: " << code << endl;
}

int main() {
    printInfo("Ali", 20);         
    printInfo(101, "Programming"); 
    return 0;
}



