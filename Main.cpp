#include <iostream>
#include <string>
#include <cstdlib>
#include <fstream>
using namespace std;

void ganador(int decision1, int decision2, string jugador1, string jugador2);

int main() {
    int modo;
    int decision1 = 0;
    int decision2 = 0;
    int computadora;
    int numero;
    int contador;
    int intentos;
    string jugador1, jugador2;


    cout << "BIENVENIDO A PIEDRA, PAPEL, O TIJERA" << endl;
    cout << " Selecciona una de las opciones" << endl;
    cout << " 1. Jugador contra maquina" << endl;
    cout << " 2. Jugador contra Jugador" << endl;
    cout << " 3. Como se juega?" << endl;
    cout << " 4. Desarrolladores " << endl;
    cout << " 5. Salir" << endl;
    cin >> modo;
 
 switch (modo) {
        case 1: 
         
    cout << " JUEGO DE PIEDRA, PAPEL O TIJERA" << endl;
    //En la parte del registro se deifine "jugador1" //
            do {
                cout << jugador1 << " Porfavor selecciona una de las opciones para vencer a la maquina" << endl;
                cout << "1. Piedra" << endl << "2. Papel" << endl << "3. Tijera" << endl;
                cin >> numero;
                cout << endl;

                computadora = rand() % 3 + 1;
                cout << "La maquina elige: " << computadora << endl;

                if (numero == computadora) {
                    cout << "Empate" << endl;
                  //Se guarda en el registro final //
                    registro(jugador1 + " vrs CPU: Empate");
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
           
        case 2:  
           cout << "Modo jugador contra jugador seleccionado." << endl << endl;

            cout << "En el juego, cada jugador puede escoger uno de los tres movimientos:" << endl;
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
           
           return 0;
    
            
        case 3:
            cout << "El objetivo es vencer al oponente seleccionando el arma que gana, según las siguientes reglas:" << endl;
            cout << "- La piedra aplasta la tijera." << endl;
            cout << "- La tijera corta el papel." << endl;
            cout << "- El papel envuelve la piedra." << endl;
            cout << "- En caso de empate (que dos jugadores elijan el mismo elemento), se juega otra vez." << endl;
            cout << "Opcion 1 es una opcion para quienes quieran jugar individualmente contra la maquina" << endl;
            cout << "Opcion 2 es para quienes quieren divertirse junto a un amigo" << endl;
            break;
        case 4:
            cout << "Este juego ha sido hecho por 3 grandes desarrolladores" << endl;
            cout << "Edwin Gerardo Alvarez Barrientos - 00078724 - Sección 01" << endl;
            cout << "Cesia Geovanna Torres Escobar - 00154423 - Seccion 03" << endl;
            cout << "Juan Pablo Valladares Ventura - 00198724 - sección 02" << endl;
            break;
        case 5:
            cout << "Gracias por jugar. ¡Adiós!" << endl;
            return 0;
        default:
            cout << "Opcion no valida, por favor selecciona una opcion del 1 al 5" << endl;
    }

            return 0;


     
     void ganador(int decision1, int decision2, string jugador1, string jugador2); {
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
     
     
     
