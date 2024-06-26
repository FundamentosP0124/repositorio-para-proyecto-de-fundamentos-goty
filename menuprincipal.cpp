#include <iostream>
using namespace std;

int main(){

int modo;

cout << "BIENVENIDO A PIEDRA, PAPEL, O TIJERA" << endl;
cout << " Selecciona una de las opciones" << endl;
cout << " 1. Jugador contra maquina" << endl;
cout << " 2. Jugador contra Jugador" << endl;
cout << " 3. Como se juega?" << endl;
cin >> modo;

switch (modo)
{
case 1: 

break;

case 2:



break;
case 3:
}

cout << "El objetivo es vencer al oponente seleccionando el arma que gana, según las siguientes reglas:" << endl;
cout << "La piedra aplasta la tijera. ..." << endl;
cout << "La tijera corta el papel. ... " << endl;
cout << "El papel envuelve la piedra. ..." << endl;
cout << "En caso de empate (que dos jugadores elijan el mismo elemento o que tres jugadores elijan cada uno un objeto distinto), se juega otra vez." << endl;

return 0;
}