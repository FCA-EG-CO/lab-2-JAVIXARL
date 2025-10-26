#include <iostream>
using namespace std;
int main(){
int operaciones;
int num1;
int num2;
int num3;
int sum;
double prom;
int prod;
int max;
int min;

    cout<<"INGRESE EL PRIMER NUMERO ENTERO"<<endl;
    cin>>num1;
    cout<<"INGRESE EL SEGUNDO NUMERO ENTERO"<<endl;
    cin>>num2;
    cout<<"INGRESE EL TERCER NUMERO ENTERO"<<endl;
     cin>>num3;
    cout<<"ESCOGA LA OPCION QUE DESEE: "<<endl;
    cout<<"1-- Suma"<<endl;
    cout<<"2-- promedio"<<endl;
    cout<<"3-- producto"<<endl;
    cout<<"4-- max"<<endl;
    cout<<"5-- min"<<endl;
    cin>>operaciones;
    switch (operaciones){
        case 1:
        sum = num1 + num2 + num3;
        cout<<"LA SUMA ES: "<<sum<<endl;
        break;
        case 2:
        prom = (num1 + num2 + num3) / 3;
        cout<<"EL PROMEDIO ES: "<<prom<<endl;
        break;
        case 3:
        prod = num1 * num2 * num3;
        cout<<"EL PRODUCTO ES: "<<prod<<endl;
        break;
        case 4:
        if (num1 > num2 && num1 > num3){
            max = num1;
            }else if (num2 > num1 && num2 > num3){
                max = num2;
            }else {
                max = num3;
                
            }
            cout<<"EL MAXIMO ES: "<<max<<endl;
            break;
            case 5:
            if (num1 < num2 && num1 < num3){
            min = num1;
            }else if (num2 < num1 && num2 < num3){
                min = num2;
            }else {
                min = num3;
                
            }
            cout<<"EL MINIMO ES: "<<min<<endl;
            break;
            default: 
            cout<<"ESTA OPCION NO ES POSIBLE DE REALIZAR"<<endl;
            break;
    }
        
        

    return 0;
}