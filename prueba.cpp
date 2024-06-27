#include <iostream>
#include <cstdlib>
using namespace std;
int main(){

    int computadora;
    int numero;

   do{
    cout << " JUEGO DE PIERDA, PAPEL O TIJERA" << endl;
    cout << " Seleccione una de las opciones" << endl ;
    cout << " 1. Piedra" << "2. Papel" << endl << "3. Tijera" << endl;
    cin >> numero << endl;

    
    int piedra, papel, tijera ;
    int puntosf = 0 , puntosc = 0 , empate = 0 ;

   cout << " La Maquina eligio:" ;

    }  while (/* condition */)
    {
         if (numero == computadora){
    cout << "Empate" ;
}
        else if ((numero == 1 && computadora == 3) ||
                 (numero == 2 && computadora == 1) ||
                 (numero == 3 && computadora == 2))
    {
        cout  << "El usuario gana" ;
    }           
        else {
            cout << "Maquina gana"
        }

    
    }

    return 0;
}