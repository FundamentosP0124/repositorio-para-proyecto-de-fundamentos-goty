#include <iostream>
#include <fstream>
#include <string.h>
#include <cstring> //incluye la biblioteca correcta paara tranajar con cadenas

using namespace std;
int main(){
string nombreArchivo = "archivo.txt";
ofstream archivo;

archivo.open(nombreArchivo.c_str(), fstream::app);
archivo <<"Instrumentos :"<<endl;
archivo<< "guitarra"<<endl;

archivo.close();
cout<<"listo";


return 0;
}