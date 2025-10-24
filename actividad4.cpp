#include <iostream>
using namespace std;

int main(){
    int rows = 3;
    int cols = 4;

    // Crear matriz 2D dinamica (heap) usando new
    int **mat = new int*[rows];
    for (int i = 0; i < rows; ++i) {
        mat[i] = new int[cols];
    }

    // Llenar la matriz con datos
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            mat[i][j] = i * cols + j + 1; 
        }
    }

    // Mostrar la matriz
    cout << "Matriz " << rows << "x" << cols << ":" << endl;
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            cout << mat[i][j] << '\t';
        }
        cout << endl;
    }
    int stackVar = 123; // variable en stack
    cout << "direccion stackVar: " << &stackVar << endl;
    cout << "direccion del puntero a filas (mat): " << mat << endl;
    cout << "direccion de la primera fila (mat[0]): " << (void*)mat[0] << endl;

    // Liberar la memoria (delete)
    for (int i = 0; i < rows; ++i) {
        delete[] mat[i];
    }
    delete[] mat;

    return 0;
}
