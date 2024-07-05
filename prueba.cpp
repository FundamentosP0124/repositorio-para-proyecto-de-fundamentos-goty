#include <iostream>
#include <cstdlib>
using namespace std;

int main(){

    int computadora;
    int numero;
    int contador;
    int intentos;

   do{
    cout << " JUEGO DE PIERDA, PAPEL O TIJERA" << endl;
    cout << " Seleccione una de las opciones" << endl ;
    cout << "1. Piedra" << endl << "2. Papel" << endl << "3. Tijera" << endl;
    cin >> numero ;
    cout << endl ;

    computadora = rand() % 3 + 1 ;

  cout <<  "La maquina elige: " << computadora << endl ;

    
   /* int piedra, papel, tijera ;
    int puntosf = 0 , puntosc = 0 , empate = 0 */


     if (numero == computadora){
    cout << "Empate" ;
}
        else if ((numero == 1 && computadora == 3) ||
                 (numero == 2 && computadora == 1) ||
                 (numero == 3 && computadora == 2))
    {
        cout  << "Ganaste" ;
    }  else {
            cout << "Perdiste" ;
    }

contador++;

} while (intentos < 3) ;


    return 0;
}