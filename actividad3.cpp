#include <iostream>
using namespace std;


int main(){

    int N = 3;
    int arr[N] = {1, 2, 3};
    int *ptr = arr;

    cout << "contenido array modificando con puntero;" << endl;

    for (int i = 0; i < N ; i++){

        *(ptr + i) = *(ptr + i) + 5;

        cout << arr[i] << endl;

    }

    cout << "direccion de memoria del array" << arr <<endl;
    cout << "direccion de memoria del punter" <<ptr <<endl;


    return 0;


}