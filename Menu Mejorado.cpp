#include <iostream>

using namespace std;

int main()
{
    char opcion;
    do
    {
        cout << "Menu"<< "\n";
        cout << "A Caren asada"<< "\n";
        cout << "B pollo" << "\n";
        cout << "C cerdo" << "\n";
        cout << "Selecione una opcion: " << "\n";
        cin >> opcion;
        cout << "opcion selecionada" << opcion << "\n";
    }
    while (opcion != 'A' && opcion != 'B' && opcion != 'C');

    return 0;
}