#include <iostream>
#include <string>
using namespace std;

class Socio {
private:
    string nombre;
    int antiguedad;

public:
    Socio() {
        cout << "Ingrese nombre del socio: ";
        cin >> nombre;
        cout << "Ingrese antiguedad en anios: ";
        cin >> antiguedad;
    }

    int obtenerAntiguedad() const {
        return antiguedad;
    }

    string obtenerNombre() const {
        return nombre;
    }
};

class Club {
private:
    Socio socios[3];

public:
    void imprimirMayorAntiguedad() {
        int mayorAntiguedad = 0;
        string nombreMayor;

        for (int i = 0; i < 3; i++) {
            if (socios[i].obtenerAntiguedad() > mayorAntiguedad) {
                mayorAntiguedad = socios[i].obtenerAntiguedad();
                nombreMayor = socios[i].obtenerNombre();
            }
        }

        cout << "El socio con mayor antiguedad es: " << nombreMayor << " con " << mayorAntiguedad << " anios." << endl;
    }
};

int main() {
    Club club;
    club.imprimirMayorAntiguedad();
    return 0;
}

