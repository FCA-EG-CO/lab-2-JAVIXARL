#include <iostream>
using namespace std;

int main() {
    int numero;
    int d1, d2, d3, d4, d5;

    cout << "Introduzca un numero entero de cinco digitos: "<<endl;
    cin >> numero;

   
    d1 = numero / 10000;          
    d2 = (numero / 1000) % 10;    
    d3 = (numero / 100) % 10;     
    d4 = (numero / 10) % 10;      
    d5 = numero % 10;             

   
    cout << "Digitos separados: " <<d1<< "   "<< d2<<"   "<<d3<<"   "<<d4<<"   "<<d5<<endl;

    return 0;
}
