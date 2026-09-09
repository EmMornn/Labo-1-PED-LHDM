#include <iostream>
using namespace std;

int saldoi = 1000;
int saldor = 0;
int depo = 0;
int reti = 0;

void VerSaldo()
{
    cout << "" << endl;
    cout << "Su saldo disponible es: $" << saldoi << endl;
    cout << "" << endl;
}

int MostrarMenu()
{
    int seleccion;

    cout << endl;
    cout << "CAJERO POR LHDM" << endl;
    cout << "1. Ver Saldo Disponible" << endl;
    cout << "2. Transferir Dinero" << endl;
    cout << "3. Retirar Dinero (en multiplos de 5)" << endl;
    cout << "4. Salir" << endl;
    cout << "Seleccione Una opcion: " << endl;
    cout << endl;

    cin >> seleccion;
    return seleccion;
};

void Retirar(int* saldoi, int* reti)
{
    *saldoi = *saldoi - *reti;
    cout << "Usted ha retirado: $" << *reti << endl;
};

void Salir()
{
    cout << "Cerrando el programa..." << endl;
    cout << "Gracias por usar el cajero LHDM :) " << endl;
    cout << endl;
}

int main()
{

    int menu;

    do
    {
        menu = MostrarMenu();

        switch (menu)
        {
        case 1:
            cout << endl;
            cout << "Has seleccionado: Consultar saldo " << endl;
            VerSaldo();

            break;
        case 2:
            cout << endl;
            cout << "Has seleccionado: Depositar dinero" << endl;
            cout << "Ingrese la cantidad que desea depositar a su cuenta: ";
            cin >> depo;
            if (depo > 0)
            {
                Depositar();
            }
            else
            {
                cout << "Accion no disponible, intente nuevamente" << endl;
            }

            break;
        case 3:
            cout << endl;
            cout << "Has seleccionado: Retirar dinero" << endl;
            cout << "Ingrese la cantidad que desea retirar: ";
            cin >> reti;
            if (reti % 5 == 0 && saldoi >= reti)
            {
                Retirar(&saldoi, &reti);
            }
            else
            {
                cout << "Error: Accion no valida" << endl;
            }

            break;
        case 4:
            cout << endl;
            cout << "Has seleccionado: Salir" << endl;
            Salir();
            break;
        default:
            cout << "Opcion no identificada, intente nuevamente" << endl;
            break;
        }

    } while (menu != 4);

    return 0;
}
