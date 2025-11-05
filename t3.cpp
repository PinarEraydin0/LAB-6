
#include <iostream>
#include <fstream>
#include <string>
using namespace std;

double getAverage(string filename) {
    ifstream file(filename);
    int numbers[1000]; 
    int count = 0;

    int num;
    while (file >> num) {
        numbers[count] = num;
        count++;
    }

    if (count == 0) return 0; 
   double sum = 0;
    for (int i = 0; i < count; i++) {
        sum += numbers[i];
    }

    return (sum) / count; 
}

int main() {
    string filename = "grades.txt";
    double average = getAverage(filename);
    cout << "Ortalama: " << average << endl;
    return 0;
}

