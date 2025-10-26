#include <iostream>
using namespace std;

int main() {
    int num1;
    int num2;
    int num3;
    int medio;

    cout<<"INGRESE TRES NUMEROS"<<endl;;
    cin >>num1, cin>>num2, cin>>num3;

    if ((num1 > num2 && num1 < num3) || (num1 < num2 && num1 > num3))
        medio = num1;
    else if ((num2 > num1 && num2 < num3) || (num2 < num1 && num2 > num3))
        medio = num2;
    else
        medio = num3;

    cout << "El numero de en medio es: " << medio << endl;

    return 0;
}
