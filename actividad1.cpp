#include <iostream>
using namespace std;

int main(){

    int var = 10;
    cout << "valor inicial: " << var << endl;
    cout << "direccion de memoria de la variable (stack): " << &var << endl;
    int *ptr = &var;
    *ptr = 20;

    cout << "nuevo valor de la variable: " << var << endl;
    cout << "direccion (sigue en stack): " << &var << endl;

    int stackVar = 55; // variable en stack
    int *heapVar = new int(99); // variable en heap

    cout << "direccion variable stack (stackVar): " << &stackVar << endl;
    cout << "direccion variable heap (heapVar pointer): " << heapVar << endl;

    delete heapVar; // liberar memoria dinamica usada para demostracion

    return 0;

}
