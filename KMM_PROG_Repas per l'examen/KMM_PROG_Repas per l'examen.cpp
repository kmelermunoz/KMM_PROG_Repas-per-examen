#include <iostream>
#include <climits> // Necessari per a INT_MAX i INT_MIN
using namespace std;

int main() {
    // Demanar a l'usuari el nombre de files i columnes
    int files, columnes;
    cout << "Introdueix el nombre de files: ";
    cin >> files;
    cout << "Introdueix el nombre de columnes: ";
    cin >> columnes;

    // Inicialitzar la matriu amb zeros
    int matriu[15][15];

    // Omplir la matriu amb les puntuacions proporcionades per l'usuari
    for (int i = 0; i < files; ++i) {
        for (int j = 0; j < columnes; ++j) {
            cout << "Introdueix la puntuacio per a la fila " << i + 1 << ", columna " << j + 1 << ": ";
            cin >> matriu[i][j];
        }
    }

    // Trobar el valor més gran i el més petit
    int maxim = INT_MIN;  // Inicialitzar amb el valor mínim possible d'enters
    int minim = INT_MAX;  // Inicialitzar amb el valor màxim possible d'enters

    for (int i = 0; i < files; ++i) {
        for (int j = 0; j < columnes; ++j) {
            if (matriu[i][j] > maxim) {
                maxim = matriu[i][j];
            }
            if (matriu[i][j] < minim) {
                minim = matriu[i][j];
            }
        }
    }

    // Imprimir els resultats
    cout << "\nEl valor mes gran es: " << maxim << endl;
    cout << "El valor mes petit es: " << minim << endl;

    return 0;
}



