#include <iostream>
#include <string>
using namespace std;

void ganador(int decision1, int decision2, string jugador1, string jugador2);

int main() {
    int modo;
    int decision1 = 0;
    int decision2 = 0;
    string jugador1, jugador2;

    cout << "Escribe 2" << endl;
    cin >> modo;

    switch(modo) {
        case 2:
            cout << "Modo jugador contra jugador seleccionado" << endl << endl;

            cout << "En el juego, el arma de cada jugador puede ser una de las 3:" << endl;
            cout << "1. Piedra" << endl;
            cout << "2. Papel" << endl;
            cout << "3. Tijera" << endl << endl;

            cout << "Jugador 1, ingresa tu nombre: ";
            cin >> jugador1;
            cout << "Jugador 1, escoge tu arma segun su numero: ";
            cin >> decision1;

            cout << "Jugador 2, ingresa tu nombre: ";
            cin >> jugador2;
            cout << "Jugador 2, escoge tu arma segun su numero: ";
            cin >> decision2;

            ganador(decision1, decision2, jugador1, jugador2);
            break;
    }

    return 0;   
}

void ganador(int decision1, int decision2, string jugador1, string jugador2) {
    if (decision1 == decision2) {
        cout << "Es un empate" << endl;
    } else if ((decision1 == 1 && decision2 == 3) ||
               (decision1 == 3 && decision2 == 2) ||
               (decision1 == 2 && decision2 == 1)) {
        cout << jugador1 << " gana!" << endl;
    } else if ((decision2 == 1 && decision1 == 3) ||
               (decision2 == 3 && decision1 == 2) ||
               (decision2 == 2 && decision1 == 1)) {
        cout << jugador2 << " gana!" << endl;
    } else {
        cout << "Decisión no válida" << endl;
    }
}