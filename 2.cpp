#include <iostream>
#include <fstream>
using namespace std;

class Student {
private:
    string name;
    int id;
    string address;
    string favourite_color;

public:
    Student(string n, int i, string a, string c) {
        name = n;
        id = i;
        address = a;
        favourite_color = c;
    }

    void saveToFile() {
        ofstream file("students.log", ios::app);
        if (file.is_open()) {
            file << "Name: " << name << endl;
            file << "ID: " << id << endl;
            file << "Address: " << address << endl;
            file << "Favourite Color: " << favourite_color << endl;
            file.close();
            cout << "Successful" << endl;
        }
        else {
            cout << "Error opening file!" << endl;
        }
    }
};

int main() {
    Student s1("Ali", 101, "Sivas", "Green");
    Student s2("Ayşe", 102, "Sivas", "Purple");

    s1.saveToFile();
    s2.saveToFile();

    cout << "Successful" << endl;

    return 0;
}
