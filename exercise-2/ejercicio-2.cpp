#include <iostream>
using namespace std;
int main()
{
int num1;
int num2;
    cout<<"INGRESE DOS NUMEROS"<<endl;
    cin>>num1, cin>>num2;
    if (num1 % num2 == 0){
        cout<<"ES MULTIPLO"<<endl;
    }else if (num1 % num2  !=0){
        cout<<"NO ES MULTIPLO"<<endl;
    }

    return 0;
}