#include <iostream>
#include <string>
using namespace std;

class Persona {
private:
    string nombre;
    int edad;

public:
    void cargarDatos() {
        cout << "Ingrese nombre: ";
        cin >> nombre;
        cout << "Ingrese edad: ";
        cin >> edad;
    }

    void imprimirDatos() {
        cout << "Nombre: " << nombre << ", Edad: " << edad << endl;
    }
};

class Empleado : public Persona {
private:
    float sueldo;

public:
    void cargarSueldo() {
        cout << "Ingrese sueldo: ";
        cin >> sueldo;
    }

    void imprimirSueldo() {
        cout << "Sueldo: " << sueldo << endl;
    }
};

int main() {
    Persona p;
    p.cargarDatos();
    p.imprimirDatos();

    Empleado e;
    e.cargarDatos();
    e.cargarSueldo();
    e.imprimirDatos();
    e.imprimirSueldo();

    return 0;
}

