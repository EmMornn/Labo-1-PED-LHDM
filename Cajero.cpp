#include <iostream>
using namespace std;

int saldoi = 1000;
int saldor = 0;
int depo = 0;
int reti = 0;

void MostrarMenu()
{
    cout << endl;
    cout << "CAJERO POR LHDM" << endl;
    cout << "1. Ver Saldo Disponible" << endl;
    cout << "2. Transferir Dinero" << endl;
    cout << "3. Retirar Dinero (en multiplos de 5)" << endl;
    cout << "4. Salir" << endl;
    cout << endl;
};


float retirar(){
    saldoi = saldoi - retiro;
    cout << "Usted ha retirado: $" << reti << endl;
};