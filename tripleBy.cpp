#include <iostream>
#include <math.h>

int tripleByValue(int c) {
    return c * 3;
}

int tripleByReference(int &c) {
    return c = c * 3;
}

using namespace std;

int main() {
    int count;
    cout << "Enter a value: ";
    cin >> count;

    cout << endl;
    cout << "Triple by value: " << tripleByValue(count) << endl;
    cout << "Count value: " << count << endl << endl;
    cout << "Triple by reference: " << tripleByReference(count) << endl;
    cout << "Count value: " << count << endl << endl;
}
