#include <iostream>
#include <cstdlib>
#include <string>
#include <fstream>

using namespace std;

int main(){

    int computadora;
    int numero;
    int contador;
    int intentos;

    cout << " JUEGO DE PIERDA, PAPEL O TIJERA" << endl;
    //En la parte del registro se deifine "jugador1" //
            do {
                cout << jugador1 << " porfavor selecciona una de las opciones para vencer a la maquina" << endl;
                cout << "1. Piedra" << endl << "2. Papel" << endl << "3. Tijera" << endl;
                cin >> numero;
                cout << endl;

                computadora = rand() % 4 + 1;
                cout << "La maquina elige: " << computadora << endl;

                if (numero == computadora) {
                    cout << "Empate" << endl;
                  //Se guarda en el registro final //
                    registro(jugador1 + " vs CPU: Empate");
                } else if ((numero == 1 && computadora == 3) ||
                           (numero == 2 && computadora == 1) ||
                           (numero == 3 && computadora == 2)) {
                    cout << "Ganaste!" << endl;
                    registro(jugador1 + " vs CPU: Ganaste");
                } else {
                    cout << "Perdiste!" << endl;
                    registro(jugador1 + " vs CPU: Perdiste");
                }

                contador++;
            } while (contador < intentos);


    return 0;
}