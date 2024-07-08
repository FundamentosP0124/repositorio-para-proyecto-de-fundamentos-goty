#include <iostream>
#include <cstdlib>
#include <string>
using namespace std;

int main(){

int modo;
string jugador1, jugador2;

cout << "BIENVENIDO A PIEDRA, PAPEL, O TIJERA" << endl;
cout << " Selecciona una de las opciones" << endl;
cout << " 1. Jugador contra maquina" << endl;
cout << " 2. Jugador contra Jugador" << endl;
cout << " 3. Como se juega?" << endl;
cout << " 4. Salir " << endl;
cin >> modo;

switch (modo)
{
case 1: 
  int computadora;
    int numero;
    int contador;
    int intentos;

 cout << "Modo Jugador contra máquina seleccionado." << endl;
    
    // Inscripción de jugadores
    cout << "Ingrese el nombre del Jugador 1: ";
    cin >> jugador1;
    cout << "Ingrese el nombre del Jugador 2: ";
    cin >> jugador2;
do{
    cout << " JUEGO DE PIERDA, PAPEL O TIJERA" << endl << "Jugador vs CPU" << endl ;
    cout << " Seleccione una de las opciones" << endl ;
    cout << "1. Piedra" << endl << "2. Papel" << endl << "3. Tijera" << endl;
    cin >> numero ;
    cout << endl ;

    computadora = rand() % 3 + 1 ;

  cout <<  "La maquina elige: " << computadora << endl ;

    
   /* int piedra, papel, tijera ;
    int puntosf = 0 , puntosc = 0 , empate = 0 */


     if (numero == computadora){
    cout << "Empate" << endl ;
}
        else if ((numero == 1 && computadora == 3) ||
                 (numero == 2 && computadora == 1) ||
                 (numero == 3 && computadora == 2))
    {
        cout  << "Ganaste" << endl ;
    }  else {
            cout << "Perdiste" << endl ;
    }

contador++;

} while (intentos < 3) ;

break;

case 2: {
  cout << "Modo Jugador contra Jugador seleccionado." << endl;
  void ganador(int decision1, int decision2, string jugador1, string jugador2);
  int modo;
    int decision1 = 0;
    int decision2 = 0;
    string player1, player2;
cout << "Modo jugador contra jugador seleccionado" << endl << endl;

            cout << "En el juego, el arma de cada jugador puede ser una de las 3:" << endl;
            cout << "1. Piedra" << endl;
            cout << "2. Papel" << endl;
            cout << "3. Tijera" << endl << endl;

            cout << "Jugador 1, ingresa tu nombre: ";
            cin >> player1;
            cout << "Jugador 1, escoge tu arma segun su numero: ";
            cin >> decision1;

            cout << "Jugador 2, ingresa tu nombre: ";
            cin >> player2;
            cout << "Jugador 2, escoge tu arma segun su numero: ";
            cin >> decision2;

            ganador(decision1, decision2, player1, player2);

break;
}
case 3:
cout << "El objetivo es vencer al oponente seleccionando el arma que gana, según las siguientes reglas:" << endl;
cout << "- La piedra aplasta la tijera." << endl;
cout << "- La tijera corta el papel." << endl;
cout << "- El papel envuelve la piedra." << endl;
cout << "- En caso de empate (que dos jugadores elijan el mismo elemento), se juega otra vez." << endl;

case 4:
cout << "Gracias por jugar. ¡Adiós!" << endl;
            return 0;
break;
default: 
cout << "Opcion no valida, porfavor selecciona una opcion del 1 al 4" << endl;
}

return 0;
}
void ganador(int decision1, int decision2, string player1, string player2) {
    if (decision1 == decision2) {
        cout << "Es un empate" << endl;
    } else if ((decision1 == 1 && decision2 == 3) ||
               (decision1 == 3 && decision2 == 2) ||
               (decision1 == 2 && decision2 == 1)) {
        cout << player1 << " gana!" << endl;
    } else if ((decision2 == 1 && decision1 == 3) ||
               (decision2 == 3 && decision1 == 2) ||
               (decision2 == 2 && decision1 == 1)) {
        cout << player2 << " gana!" << endl;
    } else {
        cout << "Decisión no válida" << endl;
    }
}