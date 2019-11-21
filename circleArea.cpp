#include <iostream>
#include <math.h>

inline double circleArea(double r) {
    return M_PI * (r * r); 
}

using namespace std;

int main() {
    
  double r;

  cout << "Enter radius: " << endl;
  cin >> r;

  cout << circleArea(r) << endl;
}
