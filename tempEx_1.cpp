#include <iostream>
#include <math.h>
#include "temp1.h"

using namespace std;

int main() {
    int x;
    int y;
    double a;
    double b;

    cout << "Enter two values: ";
    cin >> x;
    cin >> y;
    cout << minimum(x, y) << endl;
    
    cout << "Enter two decimals: ";
    cin >> a;
    cin >> b;
    cout << minimum(a, b) << endl;
}
