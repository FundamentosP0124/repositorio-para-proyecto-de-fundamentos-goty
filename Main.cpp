#include <iostream>
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
 cout << "Modo Jugador contra máquina seleccionado." << endl;
    
    // Inscripción de jugadores
    cout << "Ingrese el nombre del Jugador 1: ";
    cin >> jugador1;
    cout << "Ingrese el nombre del Jugador 2: ";
    cin >> jugador2;

break;

case 2:
  cout << "Modo Jugador contra Jugador seleccionado." << endl;
break;

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