#include <iostream>
using namespace std;


int main(){


    int var = 10;
    cout << "valor inicial " << var << endl;
    cout << "direccion de memoria de la variable " << &var << endl;
    int *ptr = &var;
    *ptr = 20;

    cout << "nuevo valor varible " << var <<endl;
    cout << "nueva direccion de pa variable " << &var << endl;



    return 0;



}