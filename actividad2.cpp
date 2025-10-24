#include <iostream>
using namespace std;


int main(){


    int var = 20;
    int *ptr = &var;
    int &ref = var;

    cout << "valor inicial de variable " << var << endl;
    *ptr = 37;

    cout << "valor modificado con puntero " << var << endl;

    ref = 100;

    cout << "valor modificado con referencia " << var << endl;

    cout << "direccion del puntero " << ptr << endl;
    cout << "direccion de la referencia" << &ref << endl;






}