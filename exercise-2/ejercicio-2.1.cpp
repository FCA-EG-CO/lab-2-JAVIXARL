#include <iostream>
using namespace std;

int main()
{
    int num;  

    cout << "INGRESE UN NUMERO: " << endl;
    cin >> num;

    if (num % 2 == 0) {
        cout << "EL NUMERO ES PAR" << endl;
    } else {
        cout << "EL NUMERO ES IMPAR" << endl;
    }

    return 0;
}
