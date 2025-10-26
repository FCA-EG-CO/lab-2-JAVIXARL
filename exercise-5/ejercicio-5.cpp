#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int x;
    int f;  
   
    cout << "x      f(x)" << endl;
  
    for (x = 0; x <= 5; x++) {
        f = pow(x, 3) - pow(x, 2) + 5;
        cout << x << "\t" << f << endl;
    }

   
    return 0;
}
