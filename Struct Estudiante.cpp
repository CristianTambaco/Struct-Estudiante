#include <iostream>
using namespace std;

//crear una estructura llamada Estudiante que contenga los siguientes campos:nombre (string), edad(int), promedio(float).Luego, declara un arreglo de 5 estudiantes.
//Escribe un programa que solicite al usuario ingresar los datos de cada estudiante y luego imprima la informacion de todos los estudiantes.

struct Estudiante {
    string nombre;
    int edad;
    float promedio;
};

int main() {
    Estudiante estudiantes[5];

cout<<"Datos de 5 estudiantes"<<endl;

    for (int i = 0; i < 5; i++) {
        cout << "Ingrese el nombre del estudiante " << i + 1 << ": ";
        cin >> estudiantes[i].nombre;
        cout << "Ingrese la edad del estudiante " << i + 1 << ": ";
        cin >> estudiantes[i].edad;
        cout << "Ingrese el promedio del estudiante " << i + 1 << ": ";
        cin >> estudiantes[i].promedio;
    }

    cout << "\nInformacion de los estudiantes:\n";
    for (int i = 0; i < 5; i++) {
        cout << "Estudiante " << i + 1 << ":\n";
        cout << "Nombre: " << estudiantes[i].nombre << "\n";
        cout << "Edad: " << estudiantes[i].edad << "\n";
        cout << "Promedio: " << estudiantes[i].promedio << "\n\n";
    }

    return 0;
}

